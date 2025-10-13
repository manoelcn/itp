#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N, B;

    while (scanf("%d %d", &N, &B) == 2)
    {
        if (N == 0 && B == 0)
            break;

        // Alocar dinamicamente array para armazenar as bolas no globo
        int *bolas = (int *)malloc(B * sizeof(int));
        if (bolas == NULL)
        {
            fprintf(stderr, "Erro ao alocar memória\n");
            return 1;
        }

        // Ler as bolas que permaneceram no globo
        for (int i = 0; i < B; i++)
        {
            scanf("%d", &bolas[i]);
        }

        // Alocar array para marcar quais diferenças são possíveis
        // Índices de 0 a N
        int *possiveis = (int *)calloc(N + 1, sizeof(int));
        if (possiveis == NULL)
        {
            fprintf(stderr, "Erro ao alocar memória\n");
            free(bolas);
            return 1;
        }

        // Calcular todas as diferenças possíveis entre pares de bolas
        for (int i = 0; i < B; i++)
        {
            for (int j = 0; j < B; j++)
            {
                int diferenca = abs(bolas[i] - bolas[j]);
                if (diferenca <= N)
                {
                    possiveis[diferenca] = 1;
                }
            }
        }

        // Verificar se todas as diferenças de 0 a N são possíveis
        int todosPossiveis = 1;
        for (int i = 0; i <= N; i++)
        {
            if (possiveis[i] == 0)
            {
                todosPossiveis = 0;
                break;
            }
        }

        // Imprimir resultado
        if (todosPossiveis)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }

        // Liberar memória alocada
        free(bolas);
        free(possiveis);
    }

    return 0;
}