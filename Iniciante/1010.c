#include <stdio.h>

int main() {
    int codigo_peca1, unidade_peca1, codigo_peca2, unidade_peca2;
    double valor_peca1, valor_peca2;
    double valor_total;

    scanf("%i %i %lf", &codigo_peca1, &unidade_peca1, &valor_peca1);
    scanf("%i %i %lf", &codigo_peca2, &unidade_peca2, &valor_peca2);

    valor_total = (unidade_peca1 * valor_peca1) + (unidade_peca2 * valor_peca2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

    return 0;
}