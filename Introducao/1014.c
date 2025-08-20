#include <stdio.h>

int main() {

    int distancia;
    double total_combustivel_gasto;
    double resultado;

    scanf("%i", &distancia);
    scanf("%lf", &total_combustivel_gasto);

    resultado = distancia / total_combustivel_gasto;

    printf("%.3f km/l\n", resultado);    

    return 0;
}