#include <stdio.h>

int main() {

    double raio;
    const double pi = 3.14159;
    double volume;

    scanf("%lf", &raio);

    volume = (4 / 3.0) * pi * (raio * raio * raio);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}