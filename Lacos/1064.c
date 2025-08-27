#include <stdio.h>

int main(){

    int contador, positivos;
    double valor, media;
    contador = positivos = 0;

    while (contador < 6)
    {
        scanf("%lf", &valor);
        if(valor > 0){
            positivos++;
            media += valor;
        }
        contador++;
    }
    
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", (media / positivos));

    return 0;
}