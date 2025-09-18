#include <stdio.h>
#include <math.h>
#include <float.h>

int main() {
    int N;
    scanf("%d", &N);

    int coordenadas[N][3];
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &coordenadas[i][0], &coordenadas[i][1], &coordenadas[i][2]);
    }

    double distancias[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double dx = coordenadas[i][0] - coordenadas[j][0];
            double dy = coordenadas[i][1] - coordenadas[j][1];
            double dz = coordenadas[i][2] - coordenadas[j][2];
            distancias[i][j] = sqrt(dx * dx + dy * dy + dz * dz);
        }
    }

    for (int i = 0; i < N; i++) {
        double menor_distancia = DBL_MAX;
        for (int j = 0; j < N; j++) {
            if (i != j) {
                if (distancias[i][j] < menor_distancia) {
                    menor_distancia = distancias[i][j];
                }
            }
        }

        if (menor_distancia <= 20.0) {
            printf("A\n");
        } else if (menor_distancia <= 50.0) {
            printf("M\n");
        } else {
            printf("B\n");
        }
    }

    return 0;
}