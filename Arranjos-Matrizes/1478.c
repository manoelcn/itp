#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho_matriz, i, j;

    while (1){
        scanf("%d", &tamanho_matriz);

        if (tamanho_matriz > 0 && tamanho_matriz <= 100){

            int matriz[tamanho_matriz][tamanho_matriz];

            for (i = 0; i < tamanho_matriz; i++){
                for (j = 0; j < tamanho_matriz; j++){
                    matriz[i][j] = abs(i - j) + 1;
                }
            }

            for (i = 0; i < tamanho_matriz; i++){
                for (j = 0; j < tamanho_matriz; j++){
                    if (j == 0){
                        printf("%3d", matriz[i][j]);
                    }
                    else{
                        printf(" %3d", matriz[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
            
        }
        else{
            break;
        }
        
    }
    
}