#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tamanho, i, j;
    srand(time(NULL));

    while (1){
        scanf("%d", &tamanho);

        if (tamanho >= 3 && tamanho <= 70){
            int matriz[tamanho][tamanho];

            for (i = 0; i < tamanho; i++){
                for (j = 0; j < tamanho; j++){
                    matriz[i][j] = (rand() % 3) + 1;
                    printf("%d", matriz[i][j]);
                }
                printf("\n");
            }
        } else{
            break;
        }
    }

    return 0;
}