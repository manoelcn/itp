#include <stdio.h>

int calcular_pressao(int pressao_desejada, int pressao_lida){
    int diferenca;

    if(pressao_desejada < 1 || pressao_desejada > 40 || pressao_lida < 1 || pressao_lida > 40 ){
        printf("Valores não aceitos!\n");
    }else{
        diferenca = pressao_desejada - pressao_lida;
    }

    return diferenca;
}

int main() {

    int n, m, resultado;

    scanf("%d", &n);
    scanf("%d", &m);

    printf("%d\n", calcular_pressao(n, m));

    return 0;
}