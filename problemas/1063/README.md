# Problema 1063 - Trilhos Novamente... TraÃ§ando Movimentos

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1063](https://www.beecrowd.com.br/judge/pt/problems/view/1063)

## Descrição:
VocÃª lembra daquela estaÃ§Ã£o de trem da cidade PopPush? Apenas para relembrar, existe uma estaÃ§Ã£o de trem em um paÃ­s incrivelmente acidentado. AlÃ©m disso, a estaÃ§Ã£o foi construÃ­da no sÃ©culo passado e infelizmente os fundos eram muito limitados. Em um determinado trecho foi possÃ­vel construir apenas uma pista e, a soluÃ§Ã£o encontrada para transportar as cargas nos dois sentidos foi construir uma estaÃ§Ã£o que permitisse desconectar os vagÃµes de uma locomotiva e conectar em outra, que iria em outro sentido.








Cada trem que chega na direÃ§Ã£o A Ã© manobrado e seus vagÃµes continuam na direÃ§Ã£o B, reorganizados conforme o chefe da estaÃ§Ã£o deseja. Ao chegar pelo lado A, cada vagÃ£o Ã© desconectado e vai atÃ© a estaÃ§Ã£o e depois segue para a direÃ§Ã£o B, para ser conectado na segunda locomotiva. VocÃª pode desconectar quantos trens deseja na estaÃ§Ã£o, mas o vagÃ£o que entra na estaÃ§Ã£o sÃ³ pode sair pelo lado B e uma vez que ele sai, nÃ£o pode mais entrar novamente.


Todos vagÃµes sÃ£o identificados pelas letras minÃºsculas (
a
 atÃ© 
z
). Isto significa 26 vagÃµes no mÃ¡ximo. O chefe da organizaÃ§Ã£o dos vagÃµes precisa agora que vocÃª ajude a resolver para ele, atravÃ©s de um programa, qual a sequÃªncia de movimentos Ã© necessÃ¡ria para obter a saÃ­da desejada apÃ³s a entrada na estaÃ§Ã£o, seguindo para a direÃ§Ã£o B. O movimento de entrada e saÃ­da da estaÃ§Ã£o Ã© descrito respectivamente pelas letras 
I
 e 
R
 (Insere e Remove). Utilizando a figura dada como exemplo, a entrada e,t,d,a para uma saÃ­da desejada d,a,t,e, resulta nos movimentos I,I,I,R,I,R,R,R




Entrada




A entrada consiste em vÃ¡rios casos de teste, onde cada caso de teste Ã© composto por 3 linhas. A primeira das 3 linhas contÃ©m um nÃºmero inteiro 
N
 que representa o nÃºmero total de vagÃµes. A segunda linha contÃ©m a sequÃªncia dos vagÃµes que vÃªm do lado A e a Terceira linha contÃ©m a sequÃªncia que o chefe de organizaÃ§Ã£o deseja como saÃ­da para o lado B. A Ãºltima linha de entrada contÃ©m apenas 0, indicando o fim da entrada.




SaÃ­da




O arquivo de saÃ­da contÃ©m a quantidade de linhas correspondente ao nÃºmero de casos de teste de entrada. Cada linha de saÃ­da contÃ©m uma sequÃªncia de 
I
 e 
R
 conforme o exemplo. Se nÃ£o for possÃ­vel mostrar a saÃ­da, as operaÃ§Ãµes devem ser interrompidas e a mensagem "
Impossible
" deve ser impressa, com um espaÃ§o apÃ³s a sequÃªncia.












Exemplo de Entrada


Exemplo de SaÃ­da













                                4

                                e t d a

                                d a t e

                                5

                                o s t a p

                                p a t o s

                                0
                            







                                IIIRIRRR

                                IIIIIRRR Impossible

## Soluções:
- `1063.c`: solução em C
- `1063.py`: solução em Python
