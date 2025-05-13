# Problema 3035 - Fabrica de PeÃ§as

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/3035](https://www.beecrowd.com.br/judge/pt/problems/view/3035)

## Descrição:
Na fÃ¡brica da empresa "Blocos de Montar", seus produtos sÃ£o brinquedos que consistem de vÃ¡rias peÃ§as de dois tipos: as peÃ§as simples e as peÃ§as compostas.


Todas as peÃ§as simples tem um preÃ§o. As peÃ§as compostas consistem de vÃ¡rias outras peÃ§as ( que podem ser simples ou compostas) de vÃ¡riados tipos. O preÃ§o de uma peÃ§a composta Ã© a soma do preÃ§o das peÃ§as a constituem.


O chefe, o Sr. Brick, pede para vocÃª implementar um algorÃ­timo que dado um conjunto de peÃ§as, calcula o preÃ§o de todas as peÃ§as compostas.




Entrada





                    A primeira linha da entrada consiste de um nÃºmero 
N
 que Ã© o nÃºmero de peÃ§as simples. Nas prÃ³ximas 
N 
linhas, haverÃ¡ uma dupla (
P, C
) onde 
P 
Ã© uma string com o nome da peÃ§a e 
C 
Ã© o custo da peÃ§a. Nas prÃ³ximas linhas haverÃ¡ uma tripla (
P
1
, P
2
, Q
) onde 
P
1
 Ã© o nome da peÃ§a composta,
 P
2
 Ã© o nome de uma das peÃ§as que compÃ´e 
P
1
, e 
Q
 Ã© a quantidade da peÃ§a 
P
2 
na peÃ§a 
P
1
.
                


A entrada termina com EOF.




SaÃ­da




Deve-se imprimir o nome da peÃ§a composta e ao lado, o seu preÃ§o, separados por um espaÃ§o.












Exemplo de Entrada


Exemplo de SaÃ­da













                                3

                                A 3

                                B 4

                                C 1

                                D A 2

                                E D 1

                                E A 4

                                D B 3

                                F E 3

                                F B 10
                            







                                D 18

                                E 30

                                F 130

## Soluções:
- `3035.c`: solução em C
- `3035.py`: solução em Python
