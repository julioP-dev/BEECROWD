# Problema 1340 - Eu Posso Adivinhar a Estrutura de Dados!

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1340](https://www.beecrowd.com.br/judge/pt/problems/view/1340)

## Descrição:
Existe uma estrutura de dados do tipo sacola, suportando duas operaÃ§Ãµes:



                    1 x

                    Jogue um elemento x na sacola.
                



                    2

                    Tire um elemento da sacola.
                


Dada uma sequencia de operaÃ§Ãµes que retornam valores, vocÃª vai adivinhar a estrutura de dados. Ã uma pilha (Ãºltimo-dentro, primeiro-fora), uma fila (primeiro-dentro, primeiro-fora), uma fila de prioridade (sempre tire os elementos grandes por primeiro) ou qualquer outra coisa que vocÃª dificilmente consegue imaginar!




Entrada




Existem muitos casos de testes. Cada caso de teste comeÃ§a com a linha contando um Ãºnico inteiro 
n
 (1 <= 
n
 <= 1000). Cada uma das seguintes 
n
 linhas Ã© um comando do tipo 1, ou um nÃºmero inteiro 2, seguido de um nÃºmero inteiro 
x
. Isso significa que depois de executar um comando do tipo 2, obtemos um elemento 
x
 
sem erros
. O valor de 
x
 Ã© sempre um nÃºmero inteiro, positivo e nÃ£o maior do que 100. O final da entrada Ã© determinado pelo final do arquivo (EOF). O tamanho do arquivo de entrada nÃ£o excede 1MB.




SaÃ­da




Para cada caso de teste, mostre um dos seguintes:


stack


Ã definitivamente uma pilha.


queue


Ã definitivamente uma fila.


priority queue


Ã definitivamente uma fila de prioridade.


impossible


NÃ£o pode ser uma pilha, uma fila ou uma fila de prioridade.


not sure


Pode ser mais de uma das trÃªs estruturas mencionadas acima.












Exemplo de Entrada


Exemplo de SaÃ­da













                                6

                                1 1

                                1 2

                                1 3

                                2 1

                                2 2

                                2 3

                                6

                                1 1

                                1 2

                                1 3

                                2 3

                                2 2

                                2 1

                                2

                                1 1

                                2 2

                                4

                                1 2

                                1 1

                                2 1

                                2 2

                                7

                                1 2

                                1 5

                                1 1

                                1 3

                                2 5

                                1 4

                                2 4
                            







                                queue

                                not sure

                                impossible

                                stack

                                priority queue
                            











                Do contest de celebraÃ§Ã£o do 100th AniversÃ¡rio da Universidade Tsinghua

                Agradecimento Especial: Yiming Li. I/O by Neilor.

## Soluções:
- `1340.c`: solução em C
- `1340.py`: solução em Python
