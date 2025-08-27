#include <stdio.h>

int main(){

    int valor, maior, posicao, contador;
    maior = 0;
    contador = 1;

    while (contador <=100)
    {
        scanf("%d", &valor);
        if(valor > maior){
            maior = valor;
            posicao = contador;
        }
        contador++;

    }

    printf("%d\n", maior);
    printf("%d\n", posicao);
    

    return 0;
}