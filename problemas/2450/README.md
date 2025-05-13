# Problema 2450 - Matriz Escada

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/2450](https://www.beecrowd.com.br/judge/pt/problems/view/2450)

## Descrição:
JoÃ£ozinho estÃ¡ aprendendo sobre matrizes. Hoje ele aprendeu como deixar matrizes na forma escada, e estÃ¡ exercitando. Para ajudÃ¡-lo, vocÃª deve escrever um programa que determine se o resultado dele realmente estÃ¡ no formato correto.


Uma matriz estÃ¡ na forma escada quando, para cada linha, as condiÃ§Ãµes a seguir forem satisfeitas:




Se a linha sÃ³ possuir zeros, entÃ£o todas as linhas abaixo desta tambÃ©m sÃ³ possuem zeros.


Caso contrÃ¡rio, seja X o elemento diferente de zero mais Ã  esquerda da linha; entÃ£o, para todas as linhas abaixo da linha de X, todos os elementos nas colunas Ã  esquerda de X e na coluna de X sÃ£o iguais a zero.






Entrada





                    A primeira linha possui dois inteiros 
N
 e 
M 
(1 â¤ 
N
,
 M
 â¤ 500), as dimensÃµes da matriz. Cada uma das 
N
 linhas seguintes contÃ©m 
M
 (0 â¤ 
M
ij 
â¤ 10
5
) inteiros nÃ£o negativos, os elementos da matriz.
                




SaÃ­da




Seu programa deve produzir uma Ãºnica linha, contendo o caractere âSâ caso a matriz esteja no formato escada, ou âNâ, caso contrÃ¡rio.












Exemplos de Entrada


Exemplos de SaÃ­da












4 6


1 2 9 9 9 9


0 0 3 9 9 9


0 0 0 0 5 9


0 0 0 0 0 6






S


















5 8


0 5 1 0 3 2 2 0


0 0 0 0 4 0 1 2


0 0 0 0 0 0 0 0


0 0 0 0 0 0 0 0


0 0 0 0 0 0 0 0






S


















5 5


1 1 2 3 4


0 1 1 4 5


0 1 2 3 6


0 0 0 2 0


0 0 0 0 0






N










OBI - OlimpÃ­ada Brasileira de InformÃ¡tica - 2014 Fase 1 Modalidade UniversitÃ¡ria (PU)

## Soluções:
- `2450.c`: solução em C
- `2450.py`: solução em Python
