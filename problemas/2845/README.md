# Problema 2845 - Festa no Polo Norte

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/2845](https://www.beecrowd.com.br/judge/pt/problems/view/2845)

## Descrição:
Giovana ficou muito feliz por conseguir mandar sua carta para o papai Noel e receber Ã³timos presentes. A alegria foi tanta que ela resolveu atÃ© convidar todos os duendes do bom velhinho para sua festa de aniversÃ¡rio, que Ã© pouco depois do Natal, em Janeiro. PorÃ©m, ela nÃ£o quer que o Grinch apareÃ§a na sua festinha para estragar tudo, entÃ£o ela bolou um plano.


Para esconder do malvado Grinch onde serÃ¡ a festa, ela resolveu ultilizar o sistema de reuniÃµes dos Duendes, que funciona assim: cada duende tem um identificador numÃ©rico Ãºnico e, quando haverÃ¡ uma reuniÃ£o, Ã© escolhida a casa de um dos duendes para sediar o encontro. Mas ao invÃ©s de escrever o nÃºmero do duende anfitriÃ£o no mural da fÃ¡brica do Papai Noel, onde todos podem ver, Ã© escrito o identificador de exatamente todos os duendes com nÃºmeros menores que o dele e que sÃ£o coprimos ao dele. Esse mÃ©todo Ã© tambÃ©m uma forma de dizer que esses duendes do mural devem levar as comidas e bebidas para a reuniÃ£o.


Como o Grinch Ã© tÃ£o ruim com nÃºmeros a ponto de nem saber que dois nÃºmeros sÃ³ sÃ£o chamados de coprimos se o MDC (mÃ¡ximo divisor comum) entre eles Ã© 1, Giovana simplesmente envia uma carta para o polo norte com os nÃºmeros dos duendes que devem levar as comidas, e com isso, os duendes jÃ¡ conseguem descobrir onde serÃ¡ a festa de aniversÃ¡rio, mas o Grinch nÃ£o.


Dada a carta que os duendes receberam, determine na casa de qual Duende serÃ¡ a festa de aniversÃ¡rio de Giovana.




Entrada





                    A primeira linha da entrada contÃ©m um inteiro 
N
 (1 â¤ 
N
 â¤ 10
4
) o qual representa a quantidade de nÃºmeros escritos na carta de Giovana. A segunda linha da entrada possui 
N
 nÃºmeros inteiros 
A
i
 (1 â¤ 
A
i
 â¤ 10
5
) representando os identificadores dos duendes escritos na carta.
                




SaÃ­da




A saÃ­da consiste de uma Ãºnica linha contendo o nÃºmero do duende que sediarÃ¡ a festa de Giovana em sua casa.












Exemplos de Entrada


Exemplos de SaÃ­da












4


7 1 9 3






10






















6


4 6 1 5 3 2






7






















12


23 19 15 9 27 3 11 17 5 1 13 25






28

## Soluções:
- `2845.c`: solução em C
- `2845.py`: solução em Python
