#include <stdio.h>

int main(){

    int tamanho_matriz, i, j, k, valor;

        while (1){

            scanf("%d", &tamanho_matriz);

            if (tamanho_matriz > 0 && tamanho_matriz <= 100){

                int matriz[tamanho_matriz][tamanho_matriz];

                int camadas = (tamanho_matriz + 1) / 2;

                for (k = 0; k < camadas; k++){
                    valor = k + 1;
                    for (i = k; i < tamanho_matriz - k; i++){
                        for (j = k; j < tamanho_matriz - k; j++){
                            matriz[i][j] = valor;
                        }
                    }
                    
                }

                for (i = 0; i < tamanho_matriz; i++){
                    for (j = 0; j < tamanho_matriz; j++){
                        if(j == 0){
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

    return 0;
}