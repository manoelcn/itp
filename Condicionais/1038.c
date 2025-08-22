#include <stdio.h>

int main() {

    int codigo, quantidade;
    double total;

    scanf("%i %i", &codigo, &quantidade);

    switch(codigo){
        case 1: total = 4 * quantidade; printf("Total: R$ %.2f\n", total); break;
        case 2: total = 4.50 * quantidade; printf("Total: R$ %.2f\n", total); break;
        case 3: total = 5 * quantidade; printf("Total: R$ %.2f\n", total); break;
        case 4: total = 2 * quantidade; printf("Total: R$ %.2f\n", total); break;
        case 5: total = 1.50 * quantidade; printf("Total: R$ %.2f\n", total); break;
    }

    return 0;
}