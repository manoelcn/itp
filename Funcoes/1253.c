#include <stdio.h>
#include <string.h>

void decodificar(char texto[], int deslocamento) {
    for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i] - deslocamento;
        if (c < 'A') {
            c += 26;
        }
        texto[i] = c;
    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        char texto[55];
        int deslocamento;

        scanf("%s", texto);
        scanf("%d", &deslocamento);

        decodificar(texto, deslocamento);

        printf("%s\n", texto);
    }

    return 0;
}
