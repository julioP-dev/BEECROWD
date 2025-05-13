# Problema 1110 - Jogando Cartas Fora

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1110](https://www.beecrowd.com.br/judge/pt/problems/view/1110)

## Descrição:
Dada uma pilha de 
n
 cartas enumeradas de 1 atÃ© 
n
 com a carta 1 no topo e a carta 
n
 na base.  
A seguinte operaÃ§Ã£o Ã© ralizada enquanto tiver 2 ou mais cartas na pilha.


Jogue fora a carta do topo e mova a prÃ³xima carta (a que ficou no topo) para a base da pilha.


Sua tarefa Ã© encontrar a sequÃªncia de cartas descartadas e a Ãºltima carta remanescente.


Cada linha de entrada (com exceÃ§Ã£o da Ãºltima) contÃ©m um nÃºmero 
n
 â¤ 50. A Ãºltima linha contÃ©m 0 e nÃ£o deve ser processada. Cada nÃºmero de entrada produz duas linhas de saÃ­da. A primeira linha apresenta a sequÃªncia de cartas descartadas e a segunda linha apresenta a carta remanescente.




Entrada




A entrada consiste em um nÃºmero indeterminado de linhas contendo cada uma um valor de 1 atÃ© 50. A Ãºltima linha contÃ©m o valor 0.




SaÃ­da




Para cada caso de teste, imprima duas linhas. A primeira linha apresenta a sequÃªncia de cartas descartadas, cada uma delas separadas por uma vÃ­rgula e um espaÃ§o. A segunda linha apresenta o nÃºmero da carta que restou. Nenhuma linha tem espaÃ§os extras no inÃ­cio ou no final. Veja exemplo para conferir o formato esperado.












Exemplo de Entrada


Exemplo de SaÃ­da













                                7

                                19

                                10

                                6

                                0
                            







                                Discarded cards: 1, 3, 5, 7, 4, 2

                                Remaining card: 6

                                Discarded cards: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 4, 8, 12, 16, 2, 10, 18, 14

                                Remaining card: 6

                                Discarded cards: 1, 3, 5, 7, 9, 2, 6, 10, 8

                                Remaining card: 4

                                Discarded cards: 1, 3, 5, 2, 6

                                Remaining card: 4
                            










AdaptaÃ§Ã£o, entradas e saÃ­das by Neilor Tonin

## Soluções:
- `1110.c`: solução em C
- `1110.py`: solução em Python
