#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 101

// Estrutura para armazenar informações de um time
typedef struct
{
    char nome[MAX_NOME];
    int pontos;
} Time;

// Função para encontrar um time pelo nome no array
int encontrarTime(Time *times, int n, char *nome)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(times[i].nome, nome) == 0)
        {
            return i;
        }
    }
    return -1;
}

// Função para processar um jogo e atualizar pontuações
void processarJogo(Time *times, int n, char *timeA, int golsA, int golsB, char *timeB)
{
    int idxA = encontrarTime(times, n, timeA);
    int idxB = encontrarTime(times, n, timeB);

    // Adicionar pontos pelos gols marcados
    times[idxA].pontos += golsA * 3;
    times[idxB].pontos += golsB * 3;

    // Verificar resultado e adicionar pontos extras
    if (golsA > golsB)
    {
        // Time A venceu
        times[idxA].pontos += 5;
    }
    else if (golsB > golsA)
    {
        // Time B venceu
        times[idxB].pontos += 5;
    }
    else
    {
        // Empate
        times[idxA].pontos += 1;
        times[idxB].pontos += 1;
    }
}

// Função para encontrar o campeão (time com mais pontos)
int encontrarCampeao(Time *times, int n)
{
    int idxCampeao = 0;
    for (int i = 1; i < n; i++)
    {
        if (times[i].pontos > times[idxCampeao].pontos)
        {
            idxCampeao = i;
        }
    }
    return idxCampeao;
}

int main()
{
    int N;

    while (scanf("%d", &N) == 1 && N != 0)
    {
        // Alocar dinamicamente array de times
        Time *times = (Time *)malloc(N * sizeof(Time));
        if (times == NULL)
        {
            fprintf(stderr, "Erro ao alocar memória\n");
            return 1;
        }

        // Ler informações dos times
        for (int i = 0; i < N; i++)
        {
            scanf("%s %d", times[i].nome, &times[i].pontos);
        }

        // Processar os N/2 jogos da última rodada
        int numJogos = N / 2;
        for (int i = 0; i < numJogos; i++)
        {
            char timeA[MAX_NOME], timeB[MAX_NOME];
            int golsA, golsB;

            // Ler no formato: TimeA golsA-golsB TimeB
            scanf("%s %d-%d %s", timeA, &golsA, &golsB, timeB);

            // Processar o jogo
            processarJogo(times, N, timeA, golsA, golsB, timeB);
        }

        // Encontrar o campeão
        int idxCampeao = encontrarCampeao(times, N);

        // Verificar se o Sport foi o campeão
        if (strcmp(times[idxCampeao].nome, "Sport") == 0)
        {
            printf("O Sport foi o campeao com %d pontos :D\n", times[idxCampeao].pontos);
        }
        else
        {
            printf("O Sport nao foi o campeao. O time campeao foi o %s com %d pontos :(\n",
                   times[idxCampeao].nome, times[idxCampeao].pontos);
        }
        printf("\n");

        // Liberar memória
        free(times);
    }

    return 0;
}