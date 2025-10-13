#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort - ordem crescente
int compareAsc(const void *a, const void *b)
{
    int numA = *(int *)a;
    int numB = *(int *)b;
    return numA - numB;
}

// Função de comparação para qsort - ordem decrescente
int compareDesc(const void *a, const void *b)
{
    int numA = *(int *)a;
    int numB = *(int *)b;
    return numB - numA;
}

int main()
{
    int N;
    scanf("%d", &N);

    // Alocar arrays para pares e ímpares (tamanho máximo N)
    int *pares = (int *)malloc(N * sizeof(int));
    int *impares = (int *)malloc(N * sizeof(int));

    // Verificar se a alocação foi bem-sucedida
    if (pares == NULL || impares == NULL)
    {
        fprintf(stderr, "Erro ao alocar memória\n");
        free(pares);
        free(impares);
        return 1;
    }

    int countPares = 0;
    int countImpares = 0;

    // Ler os números e separar em pares e ímpares
    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            pares[countPares++] = num;
        }
        else
        {
            impares[countImpares++] = num;
        }
    }

    // Ordenar pares em ordem crescente
    qsort(pares, countPares, sizeof(int), compareAsc);

    // Ordenar ímpares em ordem decrescente
    qsort(impares, countImpares, sizeof(int), compareDesc);

    // Imprimir pares
    for (int i = 0; i < countPares; i++)
    {
        printf("%d\n", pares[i]);
    }

    // Imprimir ímpares
    for (int i = 0; i < countImpares; i++)
    {
        printf("%d\n", impares[i]);
    }

    // Liberar memória alocada
    free(pares);
    free(impares);

    return 0;
}