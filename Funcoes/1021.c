#include <stdio.h>

void decompor(double n) {

    int centavos = (int)(n * 100.0 + 0.5);

    int n100 = centavos / 10000; centavos %= 10000;
    int n50  = centavos /  5000; centavos %=  5000;
    int n20  = centavos /  2000; centavos %=  2000;
    int n10  = centavos /  1000; centavos %=  1000;
    int n5   = centavos /   500; centavos %=   500;
    int n2   = centavos /   200; centavos %=   200;

    int m1   = centavos /   100; centavos %=   100;
    int m050 = centavos /    50; centavos %=    50;
    int m025 = centavos /    25; centavos %=    25;
    int m010 = centavos /    10; centavos %=    10;
    int m005 = centavos /     5; centavos %=     5;
    int m001 = centavos;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n",  n50);
    printf("%d nota(s) de R$ 20.00\n",  n20);
    printf("%d nota(s) de R$ 10.00\n",  n10);
    printf("%d nota(s) de R$ 5.00\n",   n5);
    printf("%d nota(s) de R$ 2.00\n",   n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",  m1);
    printf("%d moeda(s) de R$ 0.50\n",  m050);
    printf("%d moeda(s) de R$ 0.25\n",  m025);
    printf("%d moeda(s) de R$ 0.10\n",  m010);
    printf("%d moeda(s) de R$ 0.05\n",  m005);
    printf("%d moeda(s) de R$ 0.01\n",  m001);
}

int main() {

    double valor;

    scanf("%lf", &valor);

    decompor(valor);

    return 0;
}
