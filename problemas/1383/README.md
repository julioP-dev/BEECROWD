# Problema 1383 - Sudoku

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1383](https://www.beecrowd.com.br/judge/pt/problems/view/1383)

## Descrição:
O jogo de Sudoku espalhou-se rapidamente por todo o mundo, tornando-se hoje o passatempo mais popular em todo o planeta. Muitas pessoas, entretanto, preenchem a matriz de forma incorreta, desrespeitando as restriÃ§Ãµes do jogo. Sua tarefa neste problema Ã© escrever um programa que verifica se uma matriz preenchida Ã© ou nÃ£o uma soluÃ§Ã£o para o problema.


A matriz do jogo Ã© uma matriz de inteiros 9 x 9 . Para ser uma soluÃ§Ã£o do problema, cada linha e coluna deve conter todos os nÃºmeros de 1 a 9. AlÃ©m disso, se dividirmos a matriz em 9 regiÃµes 3 x 3, cada uma destas regiÃµes tambÃ©m deve conter os nÃºmeros de 1 a 9. O exemplo abaixo mostra uma matriz que Ã© uma soluÃ§Ã£o do problema.






Entrada




SÃ£o dadas vÃ¡rias instÃ¢ncias. O primeiro dado Ã© o nÃºmero 
n
 > 0 de matrizes na entrada. Nas linhas seguintes sÃ£o dadas as 
n
 matrizes. Cada matriz Ã© dada em 9 linhas, em que cada linha contÃ©m 9 nÃºmeros inteiros.




SaÃ­da





                    Para cada instÃ¢ncia seu programa deverÃ¡ imprimir uma linha dizendo 
"Instancia 
k
", onde 
k
 Ã© o nÃºmero da instÃ¢ncia atual. Na segunda linha, seu programa deverÃ¡ imprimir "
SIM"
 se a matriz for a soluÃ§Ã£o de um problema de Sudoku, e "
NAO"
 caso contrÃ¡rio. Imprima uma linha em branco apÃ³s cada instÃ¢ncia.
                












Exemplo de Entrada


Exemplo de SaÃ­da













                                2

                                1 3 2 5 7 9 4 6 8

                                4 9 8 2 6 1 3 7 5

                                7 5 6 3 8 4 2 1 9

                                6 4 3 1 5 8 7 9 2

                                5 2 1 7 9 3 8 4 6

                                9 8 7 4 2 6 5 3 1

                                2 1 4 9 3 5 6 8 7

                                3 6 5 8 1 7 9 2 4

                                8 7 9 6 4 2 1 5 3

                                1 3 2 5 7 9 4 6 8

                                4 9 8 2 6 1 3 7 5

                                7 5 6 3 8 4 2 1 9

                                6 4 3 1 5 8 7 9 2

                                5 2 1 7 9 3 8 4 6

                                9 8 7 4 2 6 5 3 1

                                2 1 4 9 3 5 6 8 7

                                3 6 5 8 1 7 9 2 4

                                8 7 9 6 4 2 1 3 5
                            







                                Instancia 1

                                SIM 



                                Instancia 2

                                NAO
                                












X Maratona de ProgramaÃ§Ã£o IME-USP 2006.

## Soluções:
- `1383.c`: solução em C
- `1383.py`: solução em Python
