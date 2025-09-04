#include <stdio.h>

void paridade(char mensagem[]) {
    int contador = 0;
    for (int i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] == '1') {
            contador++;
        }
    }

    printf("%s", mensagem);

    if (contador % 2 == 0)
        printf("0\n");
    else
        printf("1\n");
}

int main() {
    char mensagem[105];
    scanf("%s", &mensagem);

    paridade(mensagem);

    return 0;
}