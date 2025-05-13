# Problema 1578 - Matriz de Quadrados

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1578](https://www.beecrowd.com.br/judge/pt/problems/view/1578)

## Descrição:
Atrapalhilton Ã© um estudante muito dedicado, embora muito, muito atrapalhado. Na semana passada, seu professor de MatemÃ¡tica, o Sr. Sabetudilton, recomendou Ã  classe uma lista de exercÃ­cios sobre matrizes. Atrapalhilton, aplicado como Ã©, dediciu fazer os exercÃ­cios no mesmo dia, tÃ£o logo chegou em casa, embora apenas apÃ³s assistir o episÃ³dio vespertino de 
A Galinha Listradinha
, seu programa de TV favorito. O enunciado de um dos exercÃ­cios dizia:




Calcule o quadrado de cada uma das matrizes abaixoâ¦




No entanto, Atrapalhilton fez uma baita duma confusÃ£o. Para ele, o quadrado de uma matriz quadrada 
A
 Ã© a matriz dos quadrados dos valores da matriz 
A
. Por exemplo, o quadrado da matriz








1


3






5


7








para ele nÃ£o Ã©








16


24






40


64








mas








1


9






25


49








Atrapalhilton conseguiu calcular o âquadradoâ da primeira matriz, da segunda, da terceira e percebeu que jÃ¡ estava muito tarde, que nÃ£o ia conseguir terminar de calcular os âquadradosâ de todas as 
N
 matrizes da lista. EntÃ£o, decidiu escrever um programa que fizesse o serviÃ§o para ele.




Entrada





                    A primeira linha da entrada Ã© constituÃ­da por um Ãºnico inteiro positivo 
N
 (
N
 â¤ 100), o qual designa o nÃºmero de matrizes cujos âquadradosâ ainda nÃ£o foram calculados. Em seguida ocorre a descriÃ§Ã£o de cada uma das 
N
 matrizes. A primeira linha da descriÃ§Ã£o de uma matriz consiste de um Ãºnico inteiro 
M
 (1 â¤ 
M
 â¤ 20), o qual representa o nÃºmero de linhas e o nÃºmero de colunas da matriz. Seguem, entÃ£o, 
M
 linhas, cada uma com 
M
 inteiros 
a
ij
 (0 â¤ 
a
ij
 â¤ 2
32
-1, 1 â¤ i,j â¤ 
M
), os quais correspondem Ã s cÃ©lulas da matriz, de modo que valores consecutivos numa mesma linha sÃ£o separados por um espaÃ§o em branco.
                




SaÃ­da




Imprima o âquadradoâ de cada matriz da entrada, conforme o que Atrapalhilton entende pelo âquadradoâ de uma matriz. Antes de imprimir cada âquadradoâ, imprima a linha âQuadrado da matriz #
x
:â (sem as aspas), para ajudar Atrapalhilton a nÃ£o se perder na hora de passar a limpo os resultados para o caderno. Comece a contagem em 
x
 = 4, afinal, Atrapalhilton jÃ¡ calculou os âquadradosâ das 3 primeiras matrizes. Adicione tantos espaÃ§os em branco Ã  esquerda de cada valor quanto necessÃ¡rios para que os valores de uma mesma coluna fiquem todos alinhados Ã  direita, de modo que haja ao menos um valor em cada coluna nÃ£o precedido por espaÃ§os em branco alÃ©m do espaÃ§o em branco obrigatÃ³rio que separa colunas consecutivas. Imprima tambÃ©m uma linha em branco entre âquadradosâ de matrizes consecutivas.












Exemplo de Entrada


Exemplo de SaÃ­da













                                1

                                2

                                7 12

                                1024 1
                            







                                Quadrado da matriz #4:

                                     49 144

                                1048576   1
                            










Aquecimento para a OBI 2014

## Soluções:
- `1578.c`: solução em C
- `1578.py`: solução em Python
