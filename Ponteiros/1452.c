#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_APPS 100
#define MAX_NAME 21

// Estrutura para armazenar aplicações de um servidor ou cliente
typedef struct
{
    char apps[MAX_APPS][MAX_NAME];
    int count;
} AppList;

// Função que verifica se há interseção entre aplicações do cliente e servidor
int hasConnection(AppList *client, AppList *server)
{
    for (int i = 0; i < client->count; i++)
    {
        for (int j = 0; j < server->count; j++)
        {
            if (strcmp(client->apps[i], server->apps[j]) == 0)
            {
                return 1; // Há pelo menos uma aplicação em comum
            }
        }
    }
    return 0; // Não há aplicações em comum
}

int main()
{
    int N, M;

    while (scanf("%d %d", &N, &M) == 2)
    {
        if (N == 0 && M == 0)
            break;

        // Alocar dinamicamente os arrays de servidores e clientes
        AppList *servers = (AppList *)malloc(N * sizeof(AppList));
        AppList *clients = (AppList *)malloc(M * sizeof(AppList));

        // Ler dados dos servidores
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &servers[i].count);
            for (int j = 0; j < servers[i].count; j++)
            {
                scanf("%s", servers[i].apps[j]);
            }
        }

        // Ler dados dos clientes
        for (int i = 0; i < M; i++)
        {
            scanf("%d", &clients[i].count);
            for (int j = 0; j < clients[i].count; j++)
            {
                scanf("%s", clients[i].apps[j]);
            }
        }

        // Contar conexões
        int totalConnections = 0;
        for (int i = 0; i < M; i++)
        { // Para cada cliente
            for (int j = 0; j < N; j++)
            { // Para cada servidor
                if (hasConnection(&clients[i], &servers[j]))
                {
                    totalConnections++;
                }
            }
        }

        printf("%d\n", totalConnections);

        // Liberar memória alocada
        free(servers);
        free(clients);
    }

    return 0;
}