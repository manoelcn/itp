#include <stdio.h>

int main() {
    int numero_funcionario;
    int horas_trabalhadas;
    double valor_hora_trabalhada;
    double salario;

    scanf("%i", &numero_funcionario);
    scanf("%i", &horas_trabalhadas);
    scanf("%lf", &valor_hora_trabalhada);

    salario = horas_trabalhadas * valor_hora_trabalhada;

    printf("NUMBER = %i\n", numero_funcionario);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}