#include <stdio.h>

int main(){

    long long sequencia_fibonaci[60];
    int casos_teste, valor, i, j;

    sequencia_fibonaci[0] = 0;
    sequencia_fibonaci[1] = 1;
    for(j = 2; j <= 60; j++){
        sequencia_fibonaci[j] = sequencia_fibonaci[j-1] + sequencia_fibonaci[j-2];
    }

    scanf("%d", &casos_teste);

    for(i = 0; i < casos_teste; i++){
        scanf("%d", &valor);
        printf("Fib(%d) = %lld\n", valor, sequencia_fibonaci[valor]);
    }

    return 0;
}