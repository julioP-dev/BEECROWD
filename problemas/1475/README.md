# Problema 1475 - Remendo

**Link:** [https://www.beecrowd.com.br/judge/pt/problems/view/1475](https://www.beecrowd.com.br/judge/pt/problems/view/1475)

## Descrição:
CarlÃ£o Ã© muito preocupado com o meio ambiente. Sempre que possÃ­vel, ele tenta utilizar meios de transporte menos poluentes. Recentemente ele conseguiu um emprego prÃ³ximo de casa e agora estÃ¡ utilizando sua bicicleta para ir ao trabalho.


Infelizmente, no caminho entre sua casa e seu emprego, hÃ¡ uma fÃ¡brica de pregos, que frequentemente deixa alguns pregos caÃ­rem de seus caminhÃµes que acabam furando os pneus de da bicicleta de CarlÃ£o. Por isso, ele acaba tendo que fazer diversos remendos nos pneus de sua bicicleta.


Para fazer os consertos, CarlÃ£o usa dois tipos diferentes de remendos. Ambos os tipos tÃªm a largura do pneu da bicicleta, mas diferem no comprimento. Como o valor do remendo Ã© proporcional ao seu comprimento, CarlÃ£o estÃ¡ tentando encontrar uma maneira de economizar, gastando o menor comprimento total possÃ­vel de remendos para fazer os consertos, mas sem precisar cortÃ¡-los.


O primeiro passo para efetuar o conserto Ã© fazer uma marca com giz em uma posiÃ§Ã£o do pneu e depois anotar as distÃ¢ncias, medidas no sentido horÃ¡rio, de cada um dos furos em relaÃ§Ã£o Ã  marca de giz. Todos os furos devem ser cobertos por um remendo. CarlÃ£o gostaria de sua ajuda para determinar, a partir das posiÂ¸cÃµes dos furos, a forma mais econÃ´mica de efetuar o conserto.




Entrada





                    A entrada contÃ©m vÃ¡rios casos de teste. Cada caso de teste consiste de duas linhas. A primeira linha contÃ©m quatro inteiros 
N 
(1 â¤ 
N
 â¤ 1000), 
C
 (1 â¤ 
C
 â¤ 10
6
), (1 â¤ 
T1
) e 
T2
 (
T2
 â¤ 
C
). O inteiro 
N
 corresponde ao nÃºmero de furos no pneu e 
C
 corresponde ao comprimento da circunferÃªncia do pneu, em centÃ­metros. Os comprimentos dos remendos, em centÃ­metros, sÃ£o dados pelos inteiros 
T1
 e 
T2
. A segunda linha da entrada contÃ©m 
N
 inteiros
                    
F
i

                    (0 â¤
                    
F
i 
â¤ 
C
-1), um para cada furo, descrevendo a distÃ¢ncia no sentido horÃ¡rio da marca de giz atÃ© o furo 
i
 (1 â¤ 
i
 â¤ 
N
), em centÃ­metros. O Final da entrada Ã© determinado por EOF (fim de arquivo).
                


Obs: Se a distÃ¢ncia entre dois furos Ã© exatamente 
k
 centÃ­metros, um remendo de comprimento 
k
 centÃ­metros Ã© suficiente para cobrir ambos os furos.




SaÃ­da




Para cada caso de teste, seu programa deve imprimir uma Ãºnica linha contendo um inteiro indicando o menor comprimento total de remendos que Ã© suficiente para consertar todos os furos do pneu.












Exemplo de Entrada


Exemplo de SaÃ­da













                                5 20 2 3

                                2 5 8 11 15

                                4 20 12 9

                                1 2 3 13
                            







                                8

                                12
                            










Maratona de ProgramaÃ§Ã£o da SBC 2013.

## Soluções:
- `1475.c`: solução em C
- `1475.py`: solução em Python
