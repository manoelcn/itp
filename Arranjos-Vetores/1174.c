#include <stdio.h>

int main(){

    double vetor[100];
    double valor;
    int i;


    for(i = 0; i < 100; i++){
        scanf("%lf", &valor);
        vetor[i] = valor;
    }

    for(i = 0; i < 10; i++){
        if(vetor[i] <= 10.0){
            printf("A[%d] = %.1f\n", i, vetor[i]);
        }
    }

    return 0;
}