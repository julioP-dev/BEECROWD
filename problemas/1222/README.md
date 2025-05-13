# Problema 1222 - Concurso de Contos

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1222](https://www.beecrowd.com.br/judge/pt/problems/view/1222)

## Descrição:
Machado gosta muito de escrever. JÃ¡ escreveu muitos contos, resenhas, relatos de viagens que fez, alÃ©m de um pequeno romance. Agora Machado quer participar de um concurso de contos, que tem regras muito rÃ­gidas sobre o formato de submissÃ£o do conto. As regras do concurso especificam o nÃºmero mÃ¡ximo de caracteres por linha, o nÃºmero mÃ¡ximo de linhas por pÃ¡gina, alÃ©m de limitar o nÃºmero total de pÃ¡ginas. Adicionalmente, cada palavra deve ser escrita integralmente em uma linha (ou seja, a palavra nÃ£o pode ser separada silabicamente em duas linhas). Machado quer escrever um conto com o maior nÃºmero de palavras possÃ­vel, dentro das regras do concurso, e precisa de sua ajuda. Dados o nÃºmero mÃ¡ximo de caracteres por linha, o nÃºmero mÃ¡ximo de linhas por pÃ¡gina, e as palavras do conto que Machado estÃ¡ escrevendo, ele quer saber o nÃºmero mÃ­nimo de pÃ¡ginas que seu conto utilizaria seguindo as regras do concurso.




Entrada




A primeira linha de um caso de teste contÃ©m trÃªs inteiros 
N
 (2 â¤ 
N 
â¤ 1000), 
L
 (1 â¤ 
L 
â¤ 30 ) e 
C
 (1 â¤ 
C 
â¤ 70) , que indicam, respectivamente, o nÃºmero de palavras do conto de Machado, o nÃºmero mÃ¡ximo de linhas por pÃ¡gina e o nÃºmero mÃ¡ximo de caracteres por linha. O conto de Machado Ã© inovador e nÃ£o contÃ©m nenhum caractere alÃ©m de letras maiÃºsculas e minÃºsculas e espaÃ§os em branco, sem letras acentuadas e sem cedilha. A segunda linha contÃ©m o conto de Machado, composto de 
N 
palavras (1 â¤ comprimento de cada palavra â¤ 
C
) separadas por espaÃ§os em branco; hÃ¡ espaÃ§o em branco somente entre duas palavras, e entre duas palavras hÃ¡ exatamente um espaÃ§o em branco. O final da entrada Ã© determinado pelo final de arquivo (EOF).




SaÃ­da




Para cada caso de teste imprima uma Ãºnica linha, contendo um Ãºnico nÃºmero inteiro, indicando o nÃºmero mÃ­nimo de pÃ¡ginas que o conto de Machado ocupa, considerando as regras do concurso.












Exemplo de Entrada


Exemplo de SaÃ­da













                                14 4 20

                                Se mana Piedade tem casado com Quincas Borba apenas me daria uma esperanca colateral

                                16 3 30

                                No dia seguinte entrou a dizer de mim nomes feios e acabou alcunhando me Dom Casmurro

                                5 2 2

                                a de i de o

                                5 2 2

                                a e i o u
                            







                                2

                                1

                                3

                                3
                            










Maratona de ProgramaÃ§Ã£o da SBC 2012

## Soluções:
- `1222.c`: solução em C
- `1222.py`: solução em Python
