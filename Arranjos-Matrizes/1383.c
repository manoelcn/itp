#include <stdio.h>

int verificar_sudoku(int matriz[9][9]) {
    int i, j, k;

    for (i = 0; i < 9; i++) {
        int linha[10] = {0};
        int coluna[10] = {0};
        for (j = 0; j < 9; j++) {
            linha[matriz[i][j]] = 1;
            coluna[matriz[j][i]] = 1;
        }
        for (k = 1; k <= 9; k++) {
            if (linha[k] == 0 || coluna[k] == 0) {
                return 0;
            }
        }
    }

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            int regiao[10] = {0};
            for (int r = 0; r < 3; r++) {
                for (int c = 0; c < 3; c++) {
                    regiao[matriz[i + r][j + c]] = 1;
                }
            }
            for (k = 1; k <= 9; k++) {
                if (regiao[k] == 0) {
                    return 0;
                }
            }
        }
    }

    return 1;
}

int main() {
    int n, i, j, k;
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        int matriz[9][9];
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Instancia %d\n", k);
        if (verificar_sudoku(matriz)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }

    return 0;
}