#include <stdio.h>

void conversos_de_tempo(int segundos){
    int hora, minuto, segundo, resto;

    resto = segundos % 3600;
    hora = segundos / 3600;
    minuto = resto / 60;
    segundo = resto % 60;

    printf("%d:%d:%d\n", hora, minuto, segundo);
}

int main(){

    int n;

    scanf("%d", &n);

    conversos_de_tempo(n);

    return 0;
}