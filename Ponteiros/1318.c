#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N, M;

    while (scanf("%d %d", &N, &M) == 2)
    {
        if (N == 0 && M == 0)
            break;

        // Alocar dinamicamente um array para contar a frequência de cada bilhete
        // Índice 0 não será usado (bilhetes vão de 1 a N)
        int *frequency = (int *)calloc(N + 1, sizeof(int));

        // Verificar se a alocação foi bem-sucedida
        if (frequency == NULL)
        {
            fprintf(stderr, "Erro ao alocar memória\n");
            return 1;
        }

        // Ler os bilhetes e contar suas frequências
        for (int i = 0; i < M; i++)
        {
            int ticket;
            scanf("%d", &ticket);
            frequency[ticket]++;
        }

        // Contar quantos bilhetes aparecem mais de uma vez
        int clones = 0;
        for (int i = 1; i <= N; i++)
        {
            if (frequency[i] > 1)
            {
                clones++;
            }
        }

        printf("%d\n", clones);

        // Liberar a memória alocada
        free(frequency);
    }

    return 0;
}