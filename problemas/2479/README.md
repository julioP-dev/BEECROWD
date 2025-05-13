# Problema 2479 - Ordenando a Lista de CrianÃ§as do Papai Noel

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/2479](https://www.beecrowd.com.br/judge/pt/problems/view/2479)

## Descrição:
Papai Noel estÃ¡ nos preparativos finais para a entrega dos presentes para as crianÃ§as do mundo todo pois o natal estÃ¡ chegando mais uma vez. Olhando suas novas listas de crianÃ§as que irÃ£o ganhar presentes neste ano ele percebeu que o duende estagiÃ¡rio (que havia ficado responsÃ¡vel por fazer as listas) nÃ£o havia colocado os nomes em ordem alfabÃ©tica.


Como o Papai Noel Ã© um homem muito organizado ele deseja que cada lista de crianÃ§as possua, no seu final, o total de crianÃ§as que foram bem comportadas neste ano e um total das que nÃ£o foram. Assim ele pode comparar a quantidade de crianÃ§as que se comportam este ano com as dos anos anteriores.


Para ajudar o bom velhinho, seu dever Ã© criar um programa que leia todos os nomes da lista e imprima os mesmos nomes em ordem alfabÃ©tica. No final da lista, vocÃª deve imprimir o total de crianÃ§as que foram e nÃ£o foram comportadas neste ano.




Entrada




A entrada Ã© composta por vÃ¡rios nomes. O primeiro valor 
N
 (0 â¤ 
N
 â¤ 100), indica quantos nomes tem na lista. As 
N
 linhas seguintes, contem um caracter especial correspondente ao comportamento da crianÃ§a (
+
 indica que a crianÃ§a foi bem comportada, 
-
 indica que a crianÃ§a nÃ£o foi bem comportada). ApÃ³s o caracter especial, segue o nome da crianÃ§a com no mÃ¡ximo 20 caracteres.




SaÃ­da




Para cada lista de crianÃ§as, vocÃª deve imprimir os nomes em ordem alfabÃ©tica. ApÃ³s imprimir os nomes das crianÃ§as, vocÃª deve mostrar o total de crianÃ§as que se comportaram bem ou mal durante o ano.












Exemplos de Entrada


Exemplos de SaÃ­da













                                16

                                + Tininha

                                + Dudinha

                                - Carlinhos

                                - Marquinhos

                                + Joaozinho

                                + Bruninha

                                - Leandrinho

                                - Fernandinha

                                + Rafinha

                                - Pedrinho

                                + Aninha

                                - Tamirinha

                                - Gaguinho

                                - Zezinho

                                - Luquinhas

                                + Julhinha
                            







                                Aninha

                                Bruninha

                                Carlinhos

                                Dudinha

                                Fernandinha

                                Gaguinho

                                Joaozinho

                                Julhinha

                                Leandrinho

                                Luquinhas

                                Marquinhos

                                Pedrinho

                                Rafinha

                                Tamirinha

                                Tininha

                                Zezinho
                            


Se comportaram: 7 | Nao se comportaram: 9























                                10

                                + Zezinho

                                + Mangojatinha

                                + Bruninha

                                - Joaozinho

                                - Fernandinha

                                + Aninha

                                - Luquinhas

                                + Pedrinho

                                - Tininha

                                - Marquinhos
                            







                                Aninha

                                Bruninha

                                Fernandinha

                                Joaozinho

                                Luquinhas

                                Mangojatinha

                                Marquinhos

                                Pedrinho

                                Tininha

                                Zezinho
                            


Se comportaram: 5 | Nao se comportaram: 5























                                15

                                + Joaozinho

                                - Fernandinha

                                + Bruninha

                                + Pedrinho

                                - Zezinho

                                + Mangojatinha

                                - Marquinhos

                                + Carlinhos

                                + Aninha

                                - Luquinhas

                                + Rafinha

                                + Leandrinho

                                - Tamirinha

                                + Julhinha

                                + Gaguinho
                            







                                Aninha

                                Bruninha

                                Carlinhos

                                Fernandinha

                                Gaguinho

                                Joaozinho

                                Julhinha

                                Leandrinho

                                Luquinhas

                                Mangojatinha

                                Marquinhos

                                Pedrinho

                                Rafinha

                                Tamirinha

                                Zezinho
                            


Se comportaram: 10 | Nao se comportaram: 5












Contest de Natal 2016.

## Soluções:
- `2479.c`: solução em C
- `2479.py`: solução em Python
