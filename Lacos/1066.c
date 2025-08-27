#include <stdio.h>

int main(){

    int pares, impares, positivos, negativos, valor, i;
    pares = impares = positivos = negativos = 0;

    for(i=0; i<5; i++){
        scanf("%d", &valor);

        if(valor > 0){
            positivos++;
            if(valor % 2 == 0){
                pares++;
            }else{
                impares++;
            }
        }else{
            if(valor == 0){
                pares++;
                continue;
            }else{
                negativos++;
            }
            if(valor % 2 == 0){
                pares++;
            }else{
                impares++;
            }
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}