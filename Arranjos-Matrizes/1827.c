#include <stdio.h>

int main(){
    int n;

    while (scanf("%d", &n) != EOF){
        int matriz[n][n];
        int inicio = n / 3;
        int fim = n - 1 - inicio;
        int meio = n / 2;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                matriz[i][j] = 0;
            }
        }

        for (int i = inicio; i <= fim; i++){
            for (int j = inicio; j <= fim; j++){
                matriz[i][j] = 1;
            }
        }

        for (int i = 0; i < n; i++){
            if (i < inicio || i > fim){
                matriz[i][i] = 2;
                matriz[i][n - 1 - i] = 3;
            }
        }

        matriz[meio][meio] = 4;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}