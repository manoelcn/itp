#include <stdio.h>

int main(){

    int vetor[20], vetor_copia[20];
    int i, valor;
    int inicio, fim;
    inicio = 0;
    fim = 19;

    for(i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
        vetor_copia[i] = vetor[i];
    }

    for(i = 0; i < 10; i++){
        vetor[inicio] = vetor[fim];
        vetor[fim] = vetor_copia[inicio];
        fim--;
        inicio++;
    }

    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}