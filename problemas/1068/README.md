# Problema 1068 - BalanÃ§o de ParÃªnteses I

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1068](https://www.beecrowd.com.br/judge/pt/problems/view/1068)

## Descrição:
Dada uma expressÃ£o qualquer com parÃªnteses, indique se a quantidade de parÃªnteses estÃ¡ correta ou nÃ£o, sem levar em conta o restante da expressÃ£o. Por exemplo:




a+(b*c)-2-a        
estÃ¡ correto


(a+b*(2-c)-2+a)*2  
estÃ¡ correto
                


enquanto




(a*b-(2+c)         
estÃ¡ incorreto


2*(3-a))           
estÃ¡ incorreto


)3+b*(2-c)(        
estÃ¡ incorreto
                


Ou seja, todo parÃªnteses que fecha deve ter um outro parÃªnteses que abre correspondente e nÃ£o pode haver parÃªnteses que fecha sem um previo parenteses que abre e a quantidade total de parenteses que abre e fecha deve ser igual.




Entrada




Como entrada, haverÃ¡ 
N 
expressÃµes (1 <= 
N 
<= 10000), cada uma delas com atÃ© 1000 caracteres.




SaÃ­da




O arquivo de saÃ­da deverÃ¡ ter a quantidade de linhas correspondente ao arquivo de entrada, cada uma delas contendo as palavras 
correct
 ou 
incorrect 
de acordo com as regras acima fornecidas.












Exemplo de Entrada


Exemplo de SaÃ­da













                                a+(b*c)-2-a 

                                (a+b*(2-c)-2+a)*2 

                                (a*b-(2+c) 

                                2*(3-a))  

                                )3+b*(2-c)( 
                            







                                correct

                                correct

                                incorrect

                                incorrect

                                incorrect

## Soluções:
- `1068.c`: solução em C
- `1068.py`: solução em Python
