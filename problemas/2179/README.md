# Problema 2179 - Batuke

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/2179](https://www.beecrowd.com.br/judge/pt/problems/view/2179)

## Descrição:
Batuke Ã© um cachorro com comportamento repetitivo que tem uma rotina particular quando sai para caminhar na sua vizinhanÃ§a. A vizinhanÃ§a tambÃ©m Ã© de certa forma particular: uma matriz 
N 
x 
N
 que batuke percorre rotineiramente em espiral. Batuke inicia percorrendo: 1 cÃ©lula Ã  direita, uma abaixo, seguida por duas Ã  esquerda, duas acima, entÃ£o 3 Ã  direita, 3 para baixo, entÃ£o 4, e assim por diante.


Lucas (o dono de Batuke), leva Batuke de carro para a cÃ©lula inicial e o cÃ£o sempre segue sua rotina de corrida pelas cÃ©lulas de sua vizinhanÃ§a.


Por exemplo, se a vizinhanÃ§a tem tamanho 
N
 = 4, as cÃ©lulas sÃ£o enumeradas como segue:












e o percurso feito por Batuke, iniciando na cÃ©lula 1,1 (cÃ©lula superior esquerda Ã© 0,0) Ã©:


6,7,11,10,9,5,1,2,3,4,8,12,16,15,14,13


Neste caso, a rotina de Batuke o faz caminhar por 16 cÃ©lulas no total.












Mas Batuke nÃ£o compreende nada sobre fronteiras e ele sempre faz sua rotina (mesmo se ele tem que caminhar por diversas cÃ©lulas a mais), para atravessar todas as cÃ©lulas da vizinhanÃ§a. Se a cÃ©lula inicial for 2,2 por exemplo, a travessia em espiral (apenas as cÃ©lulas da vizinhanÃ§a sÃ£o mostradas) Ã©: 11,12,16,15,14,10,6,7,8,13,9,5,1,2,3,4.


Neste caso, Batuke caminha por 24 cÃ©lulas no total. Lucas sabe que vocÃª estÃ¡ estudando ComputaÃ§Ã£o e ele pediu a vocÃª um programa para resolver este problema: dado a vizinhanÃ§a de 
N
 linhas por 
N
 colunas e uma cÃ©lula inicial, vocÃª deverÃ¡ mostrar o percurso em espiral e o total cÃ©lulas percorridas.




Entrada




A entrada consiste em trÃªs nÃºmeros inteiros: 
N
 (2 < N â¤ 10 ), 
F 
e 
C
. 
N
 Ã© o nÃºmero de linhas na vizinhanÃ§a (cÃ©lulas enumeradas em 1..
N
x
N
, por linhas, da esquerda para a direita).
 F
 e 
C
 indica linha e coluna aonde Batuke inicia o seu percurso.




SaÃ­da




A saÃ­da consiste em 2 linhas. A primeira linha contÃ©m uma lista contendo as cÃ©lulas da vizinhanÃ§a, ordenadas pelo percurso que Batuke e separadas por um espaÃ§o em branco. A segunda linha mostra o nÃºmero total de cÃ©lulas percorridas por Batuke.












Exemplos de Entrada


Exemplos de SaÃ­da












4 1 1







                                6 7 11 10 9 5 1 2 3 4 8 12 16 15 14 13

                                16
                            






















4 3 3







                                16 15 11 12 14 10 6 7 8 13 9 5 1 2 3 4

                                46
                            










Aquecimento para a OBI 2016 - Fase 2

## Soluções:
- `2179.c`: solução em C
- `2179.py`: solução em Python
