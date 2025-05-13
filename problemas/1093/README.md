# Problema 1093 - Vampiros

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1093](https://www.beecrowd.com.br/judge/pt/problems/view/1093)

## Descrição:
Felipinho estÃ¡ empolgado com seu novo jogo de RPG sobre guerras entre clÃ£s de vampiros. Nesse jogo ele representa um personagem de um vampiro e constantemente entra em conflito contra vampiros de outros clÃ£s. Tais batalhas sÃ£o realizadas com base nas caracterÃ­sticas de cada personagem envolvido e com a ajuda de um dado comum de seis faces. Por simplicidade, vamos considerar apenas as lutas entre dois vampiros, vampiro 1 e vampiro 2. Cada um possui uma energia vital (chamaremos de


EV
1


e 
EV
2

                    respectivamente) e, alÃ©m disso, sÃ£o determinadas uma forÃ§a de ataque 
AT 
e uma capacidade de dano 
D
.
                



                    O combate Ã© realizado em turnos da maneira descrita a seguir. A cada turno um dado Ã© rolado, se o valor obtido for menor do que ou igual a 
AT
, o vampiro 1 venceu o turno, caso contrÃ¡rio o vampiro 2 Ã© quem venceu. O vencedor suga energia vital do adversÃ¡rio igual ao valor 
D
, ou seja, 
D 
pontos de 
EV 
sÃ£o diminuÃ­dos do perdedor e acrescentados ao vencedor. O combate segue atÃ© que um dos vampiros fique com 
EV 
igual a ou menor do que zero.
                



                    Por exemplo, suponhamos que
                    
EV
1
=7
,
                    
EV
2
=5
, 
AT
=2
 and 
D
=4
. Rola-se o dado e o valor obtido foi 3. Nesse caso, o vampiro 2 venceu o turno e, portanto, 4 pontos de EV sÃ£o diminuÃ­dos do vampiro 1 (
EV
1
) e acrescentados ao vampiro 2 (
EV
2
) Sendo assim, os novos valores seriam
                    
EV
1
=3


e 
EV
2
=9
. Observe que se no prÃ³ximo turno o vampiro 2 ganhar novamente, o combate irÃ¡ terminar. Os valores de AT e D sÃ£o constantes durante todo o combate, apenas
                    
EV
1

                    e
                    
EV
2

                    variam.
                



                    Apesar de gostar muito do jogo, Felipinho acha que os combates estÃ£o muito demorados e gostaria de conhecer de antemÃ£o a probabilidade de vencer, para saber se vale a pen a lutar. Assim, ele pediu que vocÃª escrevesse um programa que, dados os valores iniciais de
                    
EV
1
,
                    
EV
2
, alÃ©m de 
AT 
e 
D
, calculasse a probabilidade de o vampiro 1 vencer o combate.
                




Entrada





                    A entrada consiste de vÃ¡rios casos de teste. Cada caso de teste consiste de uma Ãºnica linha, contendo 4 inteiros
                    
EV
1
,
                    
EV
2
, 
AT
 
e 
D
 
separados por espaÃ§os (
1 â¤ 
EV
1
, 
EV
2
 
â¤ 10
, 
1 â¤ 
AT 
â¤ 5
 and 
1 â¤ 
D 
â¤ 10
). O final da entrada Ã© indicado por uma linha contendo quatro zeros, separados por espaÃ§os.
                




SaÃ­da




Para cada caso de teste da entrada seu programa deve imprimir uma Ãºnica linha. A linha deve conter apenas um nÃºmero real, escrito com precisÃ£o de uma casa decimal, representando, em termos de percentagem, a probabilidade de o vampiro 1 vencer o combate.












Exemplo de Entrada


Exemplo de SaÃ­da













                                1 1 3 1

                                1 2 1 1

                                8 5 3 1

                                7 5 2 4

                                0 0 0 0
                            







                                50.0

                                3.2

                                61.5

                                20.0
                            










Maratona de ProgramaÃ§Ã£o da SBC 2008.

## Soluções:
- `1093.c`: solução em C
- `1093.py`: solução em Python
