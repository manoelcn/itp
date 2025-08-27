#include <stdio.h>
#include <stdlib.h>

int main(){

    int pulo, numeros_canos, contador, cano_atual, cano_anterior, resultado;

    scanf("%d %d", &pulo, &numeros_canos);

    scanf("%d", &cano_anterior);


    for(contador = 1; contador < numeros_canos; contador++){
        scanf("%d", &cano_atual);

        resultado = abs(cano_atual - cano_anterior);

        if(resultado > pulo){
            printf("GAME OVER\n");
            return 0;
        }

        cano_anterior = cano_atual;

    }

    printf("YOU WIN\n");

    return 0;
}