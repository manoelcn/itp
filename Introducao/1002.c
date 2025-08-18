#include <stdio.h>

int main() {
    const double pi = 3.14159;
    double r;
    double a;

    scanf("%lf", &r); 

    a = pi * (r * r);

    printf("A = %.4f\n", a);

    return 0;
}