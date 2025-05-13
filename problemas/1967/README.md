# Problema 1967 - A Fronteira Final

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1967](https://www.beecrowd.com.br/judge/pt/problems/view/1967)

## Descrição:
Ã o ano de 2.265, e a Universidade da Fronteira Final Sideral (UFFS) jÃ¡ conta com diversos 
campi
 espalhados pela galÃ¡xia, de modo que todos os cursos de graduaÃ§Ã£o da UFFS sÃ£o ofertados em todos os 
campi
. Cada curso promove vÃ¡rias atividades por ano, e as atividades promovidas por um curso sÃ£o as mesmas em todos os 
campi
 da UFFS. Para que cada atividade possa acontecer, a Universidade precisa comprar uma certa quantidade de materiais, mas os preÃ§os de cada material nÃ£o sÃ£o os mesmos para todos os 
campi
. Um lÃ¡pis, por exemplo, pode custar É2 (2 
bitcoins
) para o 
campus
 de ChapecÃ³, no planeta Terra, e É7 (7 
bitcoins
) para o 
campus
 de ShiKahr, no planeta Vulcano. Apesar das diferenÃ§as de custo, nunca compensa comprar materiais num 
campus
 para enviÃ¡-los para outro 
campus
, dados os elevadÃ­ssimos custos de transporte e taxas de importaÃ§Ã£o e de exportaÃ§Ã£o. Assim, a fim de que todas as atividades da
                    Universidade possam ser realizadas, a Reitoria precisa transferir para cada curso de cada 
campus
 a quantia certa de 
bitcoins
 a fim de que os cursos possam eles prÃ³prios comprar os materiais.
                




Entrada





                    A primeira linha da entrada consiste de quatro inteiros positivos, 
G
, 
A
, 
M
 e 
C
 (
G
 â¤ 600; 
A
, 
C
 â¤ 100; 
M
 â¤ 2000), os quais representam respectivamente o nÃºmero de cursos de graduaÃ§Ã£o, o nÃºmero total de tipos de atividade que podem ocorrer, o nÃºmero total de tipos de material que podem ser necessÃ¡rios e o nÃºmero de 
campi
 da UFFS. Os cursos sÃ£o designados na entrada pelos inteiros de 1 a 
G
, os tipos de atividade pelos inteiros de 1 a 
A
, os tipos de material pelos inteiros de 1 a 
M
 e os 
campi
 pelos inteiros de 1 a 
C
. Seguem, entÃ£o, trÃªs tabelas de inteiros nÃ£o-negativos. Cada tabela Ã© precedida por uma linha em branco, entre duas colunas consecutivas de uma mesma tabela hÃ¡ uma coluna de espaÃ§os de largura 1, e espaÃ§os adicionais podem preceder cada inteiro duma tabela a fim de
                    que todas as colunas daquela tabela fiquem alinhadas Ã  direita e haja ao menos um inteiro por coluna que nÃ£o seja precedido por espaÃ§os adicionais. A primeira tabela consiste de 
G
 linhas, cada uma contendo 
A
 inteiros nÃ£o maiores que 10, de modo que o 
j
-Ã©simo inteiro da 
i
-Ã©sima linha representa quantas atividades do tipo 
j
 um curso de graduaÃ§Ã£o 
i
 precisa realizar no ano corrente. A segunda tabela consiste de 
A
 linhas, cada uma contendo 
M
 inteiros nÃ£o maiores que 10, de modo que o 
j
-Ã©simo inteiro da 
i
-Ã©sima linha representa de quantos materiais do tipo 
j
 a realizaÃ§Ã£o de uma atividade do tipo 
i
 precisa. A terceira e Ãºltima tabela consiste de 
M
 linhas, cada uma contendo 
C
 inteiros nÃ£o maiores que 100, de modo que o 
j
-Ã©simo inteiro da
                    
i
-Ã©sima linha representa o preÃ§o, em 
bitcoins
, de uma unidade do material do tipo 
i
 no planeta em que se situa o campus 
j
.
                




SaÃ­da




Imprima 
G
 linhas contendo 
C
 inteiros cada, de modo que o 
j
-Ã©simo inteiro da 
i
-Ã©sima linha represente a quantia de 
bitcoins
 que a Reitoria precisa transferir para o curso 
i
 do 
campus
 
j
. Siga rigorosamente as mesmas regras de espaÃ§amento entre colunas da entrada.












Exemplo de Entrada


Exemplo de SaÃ­da












2 3 3 2





                                1 2 3

                                3 2 1
                            





                                2 0 1

                                0 1 3

                                2 4 4
                            





                                  2  7

                                 11 13

                                100  3
                            







                                2070 295

                                1382 173
                            












3
áº¡
 Maratona de ProgramaÃ§Ã£o 
JÃºnior
 da UFFS

## Soluções:
- `1967.c`: solução em C
- `1967.py`: solução em Python
