# Problema 1024 - Criptografia

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1024](https://www.beecrowd.com.br/judge/pt/problems/view/1024)

## Descrição:
Solicitaram para que vocÃª construisse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que alguÃ©m consiga lÃª-las. O processo Ã© muito simples. SÃ£o feitas trÃªs passadas em todo o texto. 



                    Na primeira passada, somente caracteres que sejam letras minÃºsculas e maiÃºsculas devem ser deslocadas 3 posiÃ§Ãµes para a direita, segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente. Na segunda passada, a linha deverÃ¡ ser invertida. Na terceira e Ãºltima passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posiÃ§Ã£o para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.



                    Por exemplo, se a entrada for âTexto #3â, o primeiro processamento sobre esta entrada deverÃ¡ produzir âWh{wr #3â. O resultado do segundo processamento inverte os caracteres e produz â3# rw{hWâ. Por Ãºltimo, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser â3# rvzgVâ.
                




Entrada




A entrada contÃ©m vÃ¡rios casos de teste. A primeira linha de cada caso de teste contÃ©m um inteiro 
N 
(1 â¤ 
N 
â¤ 1*10
4
), indicando a quantidade de linhas que o problema deve tratar. As 
N 
linhas contÃ©m cada uma delas 
M
 (1 â¤ 
M 
â¤ 1*10
3
) caracteres.




SaÃ­da




Para cada entrada, deve-se apresentar a mensagem criptografada.












Exemplo de Entrada


Exemplo de SaÃ­da













                                4

                                Texto #3

                                abcABC1

                                vxpdylY .ph

                                vv.xwfxo.fd
                            







                                3# rvzgV

                                1FECedc

                                ks. \n{frzx

                                gi.r{hyz-xx

## Soluções:
- `1024.c`: solução em C
- `1024.py`: solução em Python
