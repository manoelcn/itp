#include <stdio.h>

void reajuste_salario(double salario){

    double novo_salario, reajuste, percentual;

    if (salario >= 0 && salario <= 400.00){
        percentual = 0.15;
        reajuste = salario * percentual;
    }
    else if (salario > 400 && salario <= 800.00){
        percentual = 0.12;
        reajuste = salario * percentual;
    }
    else if (salario > 800 && salario <= 1200.00){
        percentual = 0.10;
        reajuste = salario * percentual;
    }
    else if (salario > 1200 && salario <= 2000.00){
        percentual = 0.07;
        reajuste = salario * percentual;
    }
    else {
        percentual = 0.04;
        reajuste = salario * percentual;
    }

    novo_salario = salario + reajuste;

    printf("Novo salario: %.2f\n", novo_salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %\n", percentual * 100);

}

int main(){

    double valor;

    scanf("%lf", &valor);

    reajuste_salario(valor);

    return 0;
}