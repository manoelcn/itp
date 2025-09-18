#include <stdio.h>

int main() {
    char O;
    double M[12][12], soma = 0.0;
    int i, j, count = 0;

    scanf(" %c", &O);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            if (j > i && j < 11 - i && i <= 5) {
                soma += M[i][j];
                count++;
            }
        }
    }

    if (O == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma / count);

    return 0;
}
