# Problema 1045 - Tipos de TriÃ¢ngulos

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1045](https://www.beecrowd.com.br/judge/pt/problems/view/1045)

## Descrição:
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triÃ¢ngulo que estes trÃªs lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:




se A â¥ B+C, apresente a mensagem: 
NAO FORMA TRIANGULO


se A
2
 = B
2
 + C
2
, apresente a mensagem: 
TRIANGULO RETANGULO


se A
2
 > B
2
 + C
2
, apresente a mensagem: 
TRIANGULO OBTUSANGULO


se A
2
 < B
2
 + C
2
, apresente a mensagem: 
TRIANGULO ACUTANGULO


se os trÃªs lados forem iguais, apresente a mensagem: 
TRIANGULO EQUILATERO


se apenas dois dos lados forem iguais, apresente a mensagem: 
TRIANGULO ISOSCELES






Entrada




A entrada contem trÃªs valores de ponto flutuante de dupla precisÃ£o A (0 < A) , B (0 < B) e C (0 < C).




SaÃ­da




Imprima todas as classificaÃ§Ãµes do triÃ¢ngulo especificado na entrada.












Exemplos de Entrada


Exemplos de SaÃ­da












7.0 5.0 7.0







                                TRIANGULO ACUTANGULO

                                TRIANGULO ISOSCELES
                            


















6.0 6.0 10.0







                                TRIANGULO OBTUSANGULO

                                TRIANGULO ISOSCELES
                            


















6.0 6.0 6.0







                                TRIANGULO ACUTANGULO

                                TRIANGULO EQUILATERO
                            


















5.0 7.0 2.0






NAO FORMA TRIANGULO


















6.0 8.0 10.0






TRIANGULO RETANGULO

## Soluções:
- `1045.c`: solução em C
- `1045.py`: solução em Python
