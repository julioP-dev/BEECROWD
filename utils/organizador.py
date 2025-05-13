import os
import shutil
import requests
from bs4 import BeautifulSoup

# Caminhos base
caminho_c = "C"
caminho_python = "python"
caminho_destino = "problemas"

# Função para obter título e descrição do problema
def obter_detalhes_problema(numero):
    url = f"https://www.beecrowd.com.br/repository/UOJ_{numero}.html"
    try:
        response = requests.get(url)
        response.raise_for_status()
        soup = BeautifulSoup(response.text, "html.parser")

        # Extrair título
        titulo_tag = soup.find("h1")
        titulo = titulo_tag.text.strip() if titulo_tag else f"Problema {numero}"

        # Extrair descrição
        descricao_tag = soup.find("div", class_="problem")
        descricao = descricao_tag.get_text(separator="\n").strip() if descricao_tag else "Descrição não disponível."

        return titulo, descricao
    except Exception as e:
        print(f"Erro ao obter detalhes do problema {numero}: {e}")
        return f"Problema {numero}", "Descrição não disponível."

# Garante que a pasta de destino existe
os.makedirs(caminho_destino, exist_ok=True)

# Lista arquivos de ambas as pastas
arquivos_c = os.listdir(caminho_c)
arquivos_py = os.listdir(caminho_python)

# Coleta todos os números de questões
numeros = set()
for nome in arquivos_c + arquivos_py:
    if nome.endswith(".c") or nome.endswith(".py"):
        numeros.add(nome.split(".")[0])

# Cria estrutura por problema
for numero in sorted(numeros):
    pasta_problema = os.path.join(caminho_destino, numero)
    os.makedirs(pasta_problema, exist_ok=True)

    # Copia C
    caminho_arquivo_c = os.path.join(caminho_c, f"{numero}.c")
    if os.path.exists(caminho_arquivo_c):
        shutil.copy(caminho_arquivo_c, os.path.join(pasta_problema, f"{numero}.c"))

    # Copia Python
    caminho_arquivo_py = os.path.join(caminho_python, f"{numero}.py")
    if os.path.exists(caminho_arquivo_py):
        shutil.copy(caminho_arquivo_py, os.path.join(pasta_problema, f"{numero}.py"))

    # Obter título e descrição
    titulo, descricao = obter_detalhes_problema(numero)

    # Criar README.md
    readme_conteudo = f"""# Problema {numero} - {titulo}

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/{numero}](https://www.beecrowd.com.br/judge/pt/problems/view/{numero})

## Descrição:
{descricao}

## Soluções:
- `{numero}.c`: solução em C
- `{numero}.py`: solução em Python
"""
    with open(os.path.join(pasta_problema, "README.md"), "w", encoding="utf-8") as f:
        f.write(readme_conteudo)

print("Organização concluída com sucesso!")