# Problema 3139 - Buscando Novos Seguidores

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/3139](https://www.beecrowd.com.br/judge/pt/problems/view/3139)

## Descrição:
A Morgana gosta muito de jogar e fazer streamings das suas gameplays. A vÃ¡rios anos ela havia criado uma pÃ¡gina e eventualmente, sempre que tinha um tempo livre, transmitia as suas jogatinas.


Recentemente ela decidiu mergulhar de cabeÃ§a no mundo do streaming e comeÃ§ou a fazer transmissÃµes todos os dias. Com o passar tempo o canal dela vem ganhando cada dia mais seguidores e ela recebeu um e-mail da plataforma informando que atingindo alguns critÃ©rios na sua pÃ¡gina ela pode entrar no programa de sÃ³cios e ganhar ainda mais visibilidade no seu canal.


Para poder se associar, Ã© necessÃ¡rio atingir um nÃºmero mÃ­nimo de seguidores que ela ainda nÃ£o alcanÃ§ou. Analisando as mÃ©tricas da sua pÃ¡gina, ela percebeu algo interessante. O nÃºmero de novos inscritos no seu canal em um dia, Ã© sempre igual ao teto da mÃ©dia de inscritos nos Ãºltimos 30 dias anteriores.


Com base nessa informaÃ§Ã£o, ela gostaria de estimar quantos dias vai levar para ela alcanÃ§ar o nÃºmero mÃ­nimo de inscritos para poder participar do programa de sÃ³cios da plataforma. VocÃª consegue ajudÃ¡-la escrevendo um programa que calcule essa resposta?




Entrada





                    A entrada possuÃ­ duas linhas. Na primeira linha tem dois inteiros 
N
 e 
M
 (1 
\(\leq\) 
N
 < 
M
 
\(\leq\) 10
9
) separados por um espaÃ§o, o nÃºmero atual de seguidores da pÃ¡gina e o nÃºmero mÃ­nimo de seguidores necessÃ¡rios para se associar a plataforma respectivamente.





                    A segunda linha possuÃ­ 30 nÃºmeros inteiros 
D
i
 (1 
\(\leq\) 
D
i
 
\(\leq\) 10
5
) separados por um espaÃ§o, onde o i-Ã©ssimo nÃºmero dessa sequÃªncia representa o nÃºmero de inscritos no dia i dos Ãºltimos 30 dias. O primeiro nÃºmero dessa lista representa o registro mais antigo e os demais seguem a ordem cronolÃ³gica atÃ© o Ãºltimo dia que representa o registro mais recente.






SaÃ­da




Uma linha contendo um Ãºnico inteiro. O nÃºmero de dias necessÃ¡rios para alcanÃ§ar o nÃºmero mÃ­nimo de seguidores para se associar a plataforma.












Exemplo de Entrada


Exemplo de SaÃ­da













                                100 126

                                5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
                            






6












Aquecimento - II Maratona UFSC Campus AraranguÃ¡

## Soluções:
- `3139.c`: solução em C
- `3139.py`: solução em Python
