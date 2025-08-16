#include <stdio.h>

int main() {
    double a;
    double b;
    double media;

    scanf("%lf", &a);
    scanf("%lf", &b);

    media = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);

    printf("MEDIA = %.5f\n", media);

    return 0;
}