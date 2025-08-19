#include <stdio.h>
#include <math.h>

int main() {

    int a;
    int b;
    int c;
    int maiorAB;
    int maiorCab;

    scanf("%i %i %i", &a, &b, &c);

    maiorAB = ((a + b) + abs(a - b)) / 2;
    maiorCab = ((c + maiorAB) + abs(c - maiorAB)) / 2;

    printf("%i eh o maior\n", maiorCab);

    return 0;
}