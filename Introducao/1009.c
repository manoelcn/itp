#include <stdio.h>

int main() {
    char nome_funcionario[50];
    double salario_fixo;
    double total_vendas;
    double salario_final;

    scanf("%s", &nome_funcionario);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    salario_final = (total_vendas * 0.15) + salario_fixo;

    printf("TOTAL = %.2f\n", salario_final);

    return 0;
}   