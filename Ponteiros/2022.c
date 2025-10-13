#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 1001

// Estrutura para armazenar informações de um presente
typedef struct
{
    char nome[MAX_NOME];
    double preco;
    int preferencia;
} Presente;

// Função de comparação para qsort com múltiplos critérios
int comparaPresentes(const void *a, const void *b)
{
    Presente *p1 = (Presente *)a;
    Presente *p2 = (Presente *)b;

    // 1º critério: Preferência (decrescente - maior primeiro)
    if (p1->preferencia != p2->preferencia)
    {
        return p2->preferencia - p1->preferencia;
    }

    // 2º critério: Preço (crescente - menor primeiro)
    if (p1->preco != p2->preco)
    {
        if (p1->preco < p2->preco)
            return -1;
        if (p1->preco > p2->preco)
            return 1;
    }

    // 3º critério: Nome (alfabético)
    return strcmp(p1->nome, p2->nome);
}

int main()
{
    char nomePessoa[MAX_NOME];
    int Q;

    // Ler até EOF
    while (scanf("%s %d", nomePessoa, &Q) == 2)
    {
        // Consumir o \n após o número
        getchar();

        // Alocar dinamicamente array de presentes
        Presente *presentes = (Presente *)malloc(Q * sizeof(Presente));
        if (presentes == NULL)
        {
            fprintf(stderr, "Erro ao alocar memória\n");
            return 1;
        }

        // Ler informações de cada presente
        for (int i = 0; i < Q; i++)
        {
            // Ler nome do presente (pode conter espaços)
            fgets(presentes[i].nome, MAX_NOME, stdin);
            // Remover o \n do final
            presentes[i].nome[strcspn(presentes[i].nome, "\n")] = '\0';

            // Ler preço e preferência
            scanf("%lf %d", &presentes[i].preco, &presentes[i].preferencia);
            getchar(); // Consumir o \n
        }

        // Ordenar presentes usando qsort
        qsort(presentes, Q, sizeof(Presente), comparaPresentes);

        // Imprimir lista ordenada
        printf("Lista de %s\n", nomePessoa);
        for (int i = 0; i < Q; i++)
        {
            printf("%s - R$%.2lf\n", presentes[i].nome, presentes[i].preco);
        }
        printf("\n");

        // Liberar memória
        free(presentes);
    }

    return 0;
}