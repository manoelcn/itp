#include <stdio.h>

int main(){

    int vetor[100], i;
    double valor;

    scanf("%lf", &valor);

    for(i = 0; i < 100; i++){
        vetor[i] = valor;
        printf("N[%d] = %.4f\n", i, valor);
        valor = valor / 2;
    }

    return 0;
}