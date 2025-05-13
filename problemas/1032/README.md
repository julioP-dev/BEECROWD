# Problema 1032 - O Primo de Josephus

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1032](https://www.beecrowd.com.br/judge/pt/problems/view/1032)

## Descrição:
O problema de Josephus Ã© notoriamente conhecido. Para aqueles que nÃ£o estÃ£o familiarizados com o problema, entre 
n
 pessoas numeradas 
1,2 ... n
, de pÃ© em cÃ­rculo cada um deve ser executado e sÃ³ a vida do Ãºltimo que sobrar serÃ¡ preservada. Josephus foi esperto o suficiente para escolher a posiÃ§Ã£o da Ãºltima pessoa restante, poupando a sua vida.
                


Apesar de muitos bons programadores poderem se salvar desde que Josephus espalhou essa informaÃ§Ã£o (o lugar onde ficar para nÃ£o ser executado), o primo de Josephus introduziu uma nova variante do jogo maligno. Este personagem insano Ã© conhecido por suas idÃ©ias bÃ¡rbaras e desejos para limpar o mundo de programadores. Tivemos de infiltrar alguns agentes os da ACM, a fim de conhecer o processo neste novo jogo mortal.


A fim de salvar-se de esta prÃ¡tica mal, vocÃª deve desenvolver uma ferramenta capaz de prever qual serÃ¡ a pessoa salva.




O processo destrutivo





                    As pessoas sÃ£o eliminados em uma ordem muito peculiar: 
m
 Ã© uma variÃ¡vel dinÃ¢mica, que cada vez tem um valor diferente correspondente a sucessÃ£o dos nÃºmeros primos de (2,3,5,7 ...). EntÃ£o, para matar a pessoa i, o primo de Josephus conta atÃ© o prÃ³ximo 
m
 primo.
                




Entrada




Consiste em linhas separadas, contendo n [1 .. 3501], e termina com um 0.




SaÃ­da




A saÃ­da consistirÃ¡ em linhas separadas relativos Ã  posiÃ§Ã£o da pessoa que a vida serÃ¡ salva.












Exemplo de Entrada


Exemplo de SaÃ­da













                                6

                                0
                            






4










TraduÃ§Ã£o, entradas e saÃ­das por Neilor.

## Soluções:
- `1032.c`: solução em C
- `1032.py`: solução em Python
