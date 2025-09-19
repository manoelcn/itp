#include <stdio.h>

int main() {
    int largura, altura;
    scanf("%d", &largura);
    scanf("%d", &altura);

    char mapa[altura][largura];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            scanf(" %c", &mapa[i][j]);
        }
    }

    int x = 0, y = 0;

    int dx = 1, dy = 0;

    int visitado[altura][largura];
    for (int i = 0; i < altura; i++)
        for (int j = 0; j < largura; j++)
            visitado[i][j] = 0;

    while (1) {
        if (x < 0 || x >= largura || y < 0 || y >= altura) {
            printf("!\n");
            return 0;
        }

        if (visitado[y][x]) {
            printf("!\n");
            return 0;
        }
        visitado[y][x] = 1;

        char atual = mapa[y][x];

        if (atual == '*') {
            printf("*\n");
            return 0;
        } else if (atual == '>') {
            dx = 1; dy = 0;
        } else if (atual == '<') {
            dx = -1; dy = 0;
        } else if (atual == 'v') {
            dx = 0; dy = 1;
        } else if (atual == '^') {
            dx = 0; dy = -1;
        } 

        x += dx;
        y += dy;
    }

    return 0;
}
