#include <stdio.h>

int main() {

    int dia_inicio, dia_termino, dia_total;
    int hora_inicio, hora_termino, hora_total;
    int minuto_inicio, minuto_termino, minuto_total;
    int segundo_inicio, segundo_termino, segundo_total;
    int inicio, termino, duracao;

    scanf("Dia %d", &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);

    scanf(" Dia %d", &dia_termino);
    scanf("%d : %d : %d", &hora_termino, &minuto_termino, &segundo_termino);

    inicio = (dia_inicio * 24 * 3600) + (hora_inicio * 3600) + (minuto_inicio * 60) + segundo_inicio;
    termino = (dia_termino * 24 * 3600) + (hora_termino * 3600) + (minuto_termino * 60) + segundo_termino;

    duracao = termino - inicio;

    if (duracao < 60){
        duracao = 60;
    }

    dia_total = duracao / (24 * 3600);
    duracao = duracao % (24 * 3600);

    hora_total = duracao / 3600;
    duracao = duracao % 3600;

    minuto_total = duracao / 60;
    segundo_total = duracao % 60;

    printf("%d dia(s)\n", dia_total);
    printf("%d hora(s)\n", hora_total);
    printf("%d minuto(s)\n", minuto_total);
    printf("%d segundo(s)\n", segundo_total);

    // A ia me ajudou nessa, pq eu não entendi foi nada :)

    return 0;
}