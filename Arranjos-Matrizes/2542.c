#include <stdio.h>

int main() {
    int N, M, L, CM, CL, A;

    while (scanf("%d", &N) != EOF) {
        scanf("%d %d", &M, &L);

        int baralho_marcos[M][N];
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &baralho_marcos[i][j]);
            }
        }

        int baralho_leonardo[L][N];
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &baralho_leonardo[i][j]);
            }
        }

        scanf("%d %d", &CM, &CL);
        scanf("%d", &A);

        int atributo_marcos = baralho_marcos[CM - 1][A - 1];
        int atributo_leonardo = baralho_leonardo[CL - 1][A - 1];

        if (atributo_marcos > atributo_leonardo) {
            printf("Marcos\n");
        } else if (atributo_leonardo > atributo_marcos) {
            printf("Leonardo\n");
        } else {
            printf("Empate\n");
        }
    }

    return 0;
}