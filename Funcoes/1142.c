#include <stdio.h>

void pum(int quantidade_de_linhas){
    int i, contador;
    contador = 1;

    for (i = 1; i <= quantidade_de_linhas; i++){
        printf("%d %d %d PUM\n", contador, contador + 1, contador + 2);
        contador += 4;
    }
}

int main(){

    int n;

    scanf("%d", &n);

    pum(n);

    return 0;
}