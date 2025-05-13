# Problema 1548 - Fila do Recreio

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1548](https://www.beecrowd.com.br/judge/pt/problems/view/1548)

## Descrição:
Na escola onde vocÃª estuda, a hora do recreio Ã© a mais aguardada pela grande maioria dos alunos. NÃ£o sÃ³ porque as vezes as aulas sÃ£o cansativas, mas sim porque a merenda servida Ã© muito boa, preparada por um chefe italiano muito caprichoso.


Quando bate o sinal para a hora do recreio, todos os alunos saem correndo da sua sala para chegar o mais cedo possÃ­vel na cantina, tanta Ã© a vontade de comer. Um de seus professores notou, porÃ©m, que havia ali uma oportunidade.


Utilizando um sistema de recompensa, seu professor de matemÃ¡tica disse que a ordem da fila para se servir serÃ¡ dada nÃ£o pela ordem de chegada, mas sim pela soma das notas obtidas em sala de aula. Assim, aqueles com maior nota poderÃ£o se servir antes daqueles que tem menor nota.


Sua tarefa Ã© simples: dada a ordem de chegada dos alunos na cantina, e as suas respectivas notas na matÃ©ria de matemÃ¡tica, reordene a fila de acordo com as notas de matemÃ¡tica, e diga quantos alunos nÃ£o precisaram trocar de lugar nessa reordenaÃ§Ã£o.




Entrada




A primeira linha contÃ©m um inteiro 
N
, indicando o nÃºmero de casos de teste a seguir.



                    Cada caso de teste inicia com um inteiro 
M
 (1 â¤ 
M
 â¤ 1000), indicando o nÃºmero de alunos. Em seguida haverÃ¡ 
M
 inteiros distintos 
P
i
 (1 â¤ 
P
i
 â¤ 1000), onde o 
i
-Ã©simo inteiro indica a nota do 
i
-Ã©simo aluno.
                


Os inteiros acima sÃ£o dados em ordem de chegada, ou seja, o primeiro inteiro diz respeito ao primeiro aluno a chegar na fila, o segundo inteiro diz respeito ao segundo aluno, e assim sucessivamente.




SaÃ­da




Para cada caso de teste imprima uma linha, contendo um inteiro, indicando o nÃºmero de alunos que nÃ£o precisaram trocar de lugar mesmo apÃ³s a fila ser reordenada.












Exemplo de Entrada


Exemplo de SaÃ­da













                                3

                                3

                                100 80 90

                                4

                                100 120 30 50

                                4

                                100 90 30 25
                            







                                1

                                0

                                4
                            










Aquecimento para a OBI 2014

## Soluções:
- `1548.c`: solução em C
- `1548.py`: solução em Python
