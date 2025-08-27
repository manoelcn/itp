#include <stdio.h>

int main() {

    double valor;
    int valores_positivos, i;
    valores_positivos = 0;

    for(i = 0; i < 6; i++){
        scanf("%lf", &valor);
        if (valor > 0){
            valores_positivos++;
        }
    }

    printf("%d valores positivos\n", valores_positivos);

    return 0;
}