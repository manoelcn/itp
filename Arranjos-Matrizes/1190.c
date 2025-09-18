#include <stdio.h>

int main() {
    char O;
    scanf("%c", &O);

    double M[12][12];
    double soma = 0.0;
    int count = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    int start_j = 11;
    for (int i = 1; i <= 5; i++) {
        for (int j = start_j; j < 12; j++) {
            soma += M[i][j];
            count++;
        }
        start_j--;
    }

    start_j = 7;
    for (int i = 6; i <= 10; i++) {
        for (int j = start_j; j < 12; j++) {
            soma += M[i][j];
            count++;
        }
        start_j++;
    }

    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else if (O == 'M') {
        double media = soma / count;
        printf("%.1lf\n", media);
    }

    return 0;
}