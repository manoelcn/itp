#include <stdio.h>

int main() {
    int L;
    char T;
    scanf("%d %c", &L, &T);

    double M[12][12];
    double soma = 0.0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        soma += M[L][i];
    }

    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        double media = soma / 12.0;
        printf("%.1lf\n", media);
    }

    return 0;
}