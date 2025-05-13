# Problema 2065 - Fila do Supermercado

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/2065](https://www.beecrowd.com.br/judge/pt/problems/view/2065)

## Descrição:
Hoje Ã© a inauguraÃ§Ã£o de um grande supermercado em sua cidade, e todos estÃ£o muito excitados com os baixos preÃ§os prometidos.



                    Este supermercado tem 
N
 funcionÃ¡rios que trabalham no caixa, identificados por nÃºmeros de 1 a 
N
, onde cada funcionÃ¡rio leva um determinado tempo 
v
i
 para processar um item de um cliente. Ou seja, se um cliente tem 
c
j
 itens em sua cesta, um determinado funcionÃ¡rio levarÃ¡ 
v
i
*
c
j
 segundos para processar todos os itens deste cliente.
                


Quando um cliente entra na fila para ser atendido ele espera atÃ© que um funcionÃ¡rio esteja livre para o atendÃª-lo. Se mais de um funcionÃ¡rio estiverem livres ao mesmo tempo, o cliente serÃ¡ atendido pelo funcionÃ¡rio de menor nÃºmero de identificaÃ§Ã£o. Tal funcionÃ¡rio sÃ³ estarÃ¡ livre novamente apÃ³s processar todos os itens deste cliente.


HÃ¡ 
M
 clientes na fila para serem atendidos, cada um com um determinado nÃºmero de itens na sua cesta. Dadas as informaÃ§Ãµes sobre os funcionÃ¡rios nos caixas e os clientes, o gerente pediu sua ajuda para descobrir quanto tempo levarÃ¡ para que todos os clientes sejam atendidos.




Entrada




A primeira linha conterÃ¡ dois inteiros 
N
 e 
M
, indicando o nÃºmero de funcionÃ¡rios no caixa e o nÃºmero de clientes, respectivamente (1 â¤ 
N
 â¤ 
M
 â¤ 10
4
).



                    Em seguida haverÃ¡ 
N
 inteiros 
v
i
, indicando quanto tempo leva para o 
i
-Ã©simo funcionÃ¡rio processar um item (1 â¤ 
v
i
 â¤ 100, para todo 1 â¤
 i
 â¤ 
N
).
                



                    Em seguida haverÃ¡ 
M
 inteiros 
c
j
, indicando quantos itens o 
j
-Ã©simo cliente tem em sua cesta (1 â¤ 
c
j
 â¤ 100, para todo 1 â¤ 
j
 â¤ 
M
).
                




SaÃ­da




Imprima uma linha contendo um inteiro, indicando quanto tempo levarÃ¡ para que todos os clientes sejam atendidos.












Exemplos de Entrada


Exemplos de SaÃ­da













                                1 1

                                3

                                6
                            






18























                                1 2

                                1

                                5 3
                            






8























                                2 3

                                1 2

                                10 5 3
                            






13










Aquecimento para a OBI 2016

## Soluções:
- `2065.c`: solução em C
- `2065.py`: solução em Python
