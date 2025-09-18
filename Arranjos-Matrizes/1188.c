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

    int start_j = 5;
    int end_j = 6;
    for (int i = 7; i < 12; i++) {
        for (int j = start_j; j <= end_j; j++) {
            soma += M[i][j];
            count++;
        }
        start_j--;
        end_j++;
    }

    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else if (O == 'M') {
        double media = soma / count;
        printf("%.1lf\n", media);
    }

    return 0;
}