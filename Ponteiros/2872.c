#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_CAPACITY 10

// Estrutura para armazenar um pacote
typedef struct
{
    int id;
    char nome[20];
} Pacote;

// Função de comparação para qsort
int comparar_pacotes(const void *a, const void *b)
{
    Pacote *p1 = (Pacote *)a;
    Pacote *p2 = (Pacote *)b;
    return p1->id - p2->id;
}

int main()
{
    int inicio;

    // Loop principal para múltiplos casos de teste
    while (scanf("%d", &inicio) != EOF)
    {

        // Verifica se é o bit de início (1)
        if (inicio != 1)
        {
            continue;
        }

        // Alocação dinâmica inicial
        int capacidade = INITIAL_CAPACITY;
        int total_pacotes = 0;
        Pacote *pacotes = (Pacote *)malloc(capacidade * sizeof(Pacote));

        if (pacotes == NULL)
        {
            fprintf(stderr, "Erro ao alocar memória\n");
            return 1;
        }

        // Leitura dos pacotes
        char buffer[20];
        int numero;

        while (1)
        {
            // Tenta ler um número ou uma string
            if (scanf("%s", buffer) != 1)
            {
                break;
            }

            // Verifica se é o bit de finalização (0)
            if (strcmp(buffer, "0") == 0)
            {
                break;
            }

            // Se começar com "Package", lê o número do pacote
            if (strcmp(buffer, "Package") == 0)
            {
                scanf("%d", &numero);

                // Verifica se precisa realocar
                if (total_pacotes >= capacidade)
                {
                    capacidade *= 2;
                    Pacote *temp = (Pacote *)realloc(pacotes, capacidade * sizeof(Pacote));

                    if (temp == NULL)
                    {
                        fprintf(stderr, "Erro ao realocar memória\n");
                        free(pacotes);
                        return 1;
                    }
                    pacotes = temp;
                }

                // Armazena o pacote
                pacotes[total_pacotes].id = numero;
                sprintf(pacotes[total_pacotes].nome, "Package %03d", numero);
                total_pacotes++;
            }
        }

        // Ordena os pacotes usando qsort
        qsort(pacotes, total_pacotes, sizeof(Pacote), comparar_pacotes);

        // Imprime os pacotes ordenados
        for (int i = 0; i < total_pacotes; i++)
        {
            printf("%s\n", pacotes[i].nome);
        }
        printf("\n");

        // Libera a memória alocada
        free(pacotes);
    }

    return 0;
}