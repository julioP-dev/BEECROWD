#include <stdio.h>

int N, F, C, casasVisitadas = 0, passo = 1, casasPercorridas = 0;
 
int main() {
    scanf("%d", &N);
    scanf("%d%d", &F, &C);
    if(C >= 0 && C < N && F >= 0 && F < N){
        if(casasVisitadas < (N*N) - 1){
            printf("%d ", ((F * N) + (C + 1)));
        }
        else{
            printf("%d", ((F * N) + (C + 1)));
        }
        casasVisitadas++;
    }
    casasPercorridas++;
    
    while(casasVisitadas < N*N){
        if(passo % 2 != 0){
            for(int k=0; k<passo; k++){
                if(casasVisitadas < (N*N)){
                    C++;
                    casasPercorridas++;
                    if(C >= 0 && C < N && F >= 0 && F < N){
                        if(casasVisitadas < (N*N) - 1){
                            printf("%d ", ((F * N) + (C + 1)));
                        }
                        else{
                            printf("%d", ((F * N) + (C + 1)));
                        }
                        casasVisitadas++;
                    }
                }
            }
            
            for(int k=0; k<passo; k++){
                if(casasVisitadas < (N*N)){
                    F++;
                    casasPercorridas++;
                    if(C >= 0 && C < N && F >= 0 && F < N){
                        if(casasVisitadas < (N*N) - 1){
                            printf("%d ", ((F * N) + (C + 1)));
                        }
                        else{
                            printf("%d", ((F * N) + (C + 1)));
                        }
                        casasVisitadas++;
                    }
                }
            }
            passo++;
        }
        else{
            for(int k=0; k<passo; k++){
                if(casasVisitadas < (N*N)){
                    C--;
                    casasPercorridas++;
                    if(C >= 0 && C < N && F >= 0 && F < N){
                        if(casasVisitadas < (N*N) - 1){
                            printf("%d ", ((F * N) + (C + 1)));
                        }
                        else{
                            printf("%d", ((F * N) + (C + 1)));
                        }
                        casasVisitadas++;
                    }
                }
            }
            
            for(int k=0; k<passo; k++){
                if(casasVisitadas < (N*N)){
                    F--;
                    casasPercorridas++;
                    if(C >= 0 && C < N && F >= 0 && F < N){
                        if(casasVisitadas < (N*N) - 1){
                            printf("%d ", ((F * N) + (C + 1)));
                        }
                        else{
                            printf("%d", ((F * N) + (C + 1)));
                        }
                        casasVisitadas++;
                    }
                }
            }
            passo++;
        }
    }
    printf("\n%d\n", casasPercorridas);
 
    return 0;
}