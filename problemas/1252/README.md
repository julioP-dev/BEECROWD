# Problema 1252 - Sort! Sort!! e Sort!!!

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1252](https://www.beecrowd.com.br/judge/pt/problems/view/1252)

## Descrição:
Hmm! Aqui vocÃª foi solicitado a fazer uma simples ordenaÃ§Ã£o. A vocÃª serÃ£o dado 
N 
nÃºmeros e um inteiro positivo 
M
. VocÃª terÃ¡ que ordenar estes 
N 
nÃºmeros em ordem ascendente de seu mÃ³dulo 
M
. Se houver um empate entre um nÃºmero Ã­mpar e um nÃºmero par (para os quais o seu mÃ³dulo 
M 
dÃ¡ o mesmo valor) entÃ£o o nÃºmero impar irÃ¡ preceder o nÃºmero par. Se houver um empate entre dois nÃºmeros Ã­mpares (para os quais o seu mÃ³dulo 
M
 dÃ¡ o mesmo valor), entÃ£o o maior nÃºmero Ã­mpar irÃ¡ preceder o menor nÃºmero Ã­mpar. Se houve um empate entre dois nÃºmeros pares (para os quais o seu mÃ³dulo 
M
 dÃ¡ o mesmo valor), entÃ£o o menor nÃºmero par irÃ¡ preceder o maior nÃºmero par. Para o resto de valores negativos siga a regra de linguagem de programaÃ§Ã£o C: um nÃºmero negativo nunca pode ter mÃ³dulo maior do que zero. Por exemplo, -100 MOD 3 = -1, -100 MOD 4 = 0, etc.




Entrada




A entrada contÃ©m vÃ¡rios casos de teste. Cada caso de teste inicia com dois inteiros  
N 
(0 < 
N 
â¤ 10000) e 
M
 (0 < 
M 
â¤ 10000) que denotam quantos nÃºmeros existirÃ£o neste conjunto. Cada uma das prÃ³ximas 
N
 linhas conterÃ¡ um nÃºmero cada. Estes nÃºmeros deverÃ£o caber em um inteiro de 32 bits com sinal. A entrada Ã© terminada por uma linha que conterÃ¡ dois valores nulos (0) e nÃ£o deve ser processada.




SaÃ­da




A primeira linha de cada conjunto de saÃ­da irÃ¡ contÃ©r os valores de 
N
 e 
M
. As prÃ³ximas 
N
 linhas irÃ£o contÃ©r 
N
 nÃºmeros, ordenados de acordo com as regras acima mencionadas. Imprima os dois Ãºltimos zeros da entrada para a saÃ­da padrÃ£o.












Exemplo de Entrada


Exemplo de SaÃ­da













                                15 3

                                1

                                2

                                3

                                4

                                5

                                6

                                7

                                8

                                9

                                10

                                11

                                12

                                13

                                14

                                15

                                3 3

                                9

                                12

                                10

                                0 0
                            







                                15 3

                                15

                                9

                                3

                                6

                                12

                                13

                                7

                                1

                                4

                                10

                                11

                                5

                                2

                                8

                                14

                                3 3

                                9

                                12

                                10

                                0 0
                            










Agradecimento especial a Syed Monowar Hossain. TraduÃ§Ã£o, entrada e saÃ­da por Neilor.

## Soluções:
- `1252.c`: solução em C
- `1252.py`: solução em Python
