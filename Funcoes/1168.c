#include <stdio.h>
#include <string.h>

int leds_por_digito(char d) {
    switch (d) {
        case '0': return 6;
        case '1': return 2;
        case '2': return 5;
        case '3': return 5;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 3;
        case '8': return 7;
        case '9': return 6;
        default: return 0;
    }
}

int main() {
    int n, contador;
    char valor[105];

    scanf("%d", &n);

    for(contador = 0; contador < n; contador++){
        scanf("%s", &valor);
        int total = 0;

        for (int i = 0; i < strlen(valor); i++) {
            total += leds_por_digito(valor[i]);
        }

        printf("%d leds\n", total);
    }

    


    return 0;
}
