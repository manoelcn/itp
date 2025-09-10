#include <stdio.h>

int main(){

    int vetor[10];
    int valor, i;

    scanf("%d", &valor);

    if(valor <= 50){
        for(i = 0; i < 10; i++){
            vetor[i] = valor;
            valor = valor * 2;
            printf("N[%d] = %d\n", i, vetor[i]);
        }
    }
    return 0;
}