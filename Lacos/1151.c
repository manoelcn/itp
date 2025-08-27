#include <stdio.h>

int main(){

    int n, contador, numero_anterior, numero_atual, proximo_numero;
    numero_anterior = 0;
    numero_atual = 1;

    scanf("%d", &n);

    if(n > 0 && n < 46){
        if(n >= 1){
            printf("0");
        }
        if(n >= 2){
            printf(" 1");
        }

        for (contador = 3; contador <= n; contador++)
        {
            proximo_numero = numero_anterior + numero_atual;

            printf(" %d", proximo_numero);

            numero_anterior = numero_atual;
            numero_atual = proximo_numero;
        }

        printf("\n");
    }

    return 0;
}