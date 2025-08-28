#include <stdio.h>

int main(){

    int m, n, soma, auxiliar, contador;
    
    while (1)
    {
        scanf("%d %d", &m, &n);

        soma = 0;

        if (m <= 0 || n <= 0){
            break;
        }

        if (m > n){
            auxiliar = m;
            m = n;
            n = auxiliar;
        }

        for(contador = m; contador <= n; contador++){
            printf("%d ", contador);
            soma += contador;
        }
        printf("Sum=%d\n", soma);
    }

    return 0;
}