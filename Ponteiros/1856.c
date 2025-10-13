#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista encadeada
typedef struct No
{
    int pessoa;         // ID da pessoa
    struct No *proximo; // Ponteiro para o próximo nó
} No;

// Estrutura da lista com ponteiros para início e fim
typedef struct
{
    No *inicio;
    No *fim;
} Lista;

// Cria um novo nó
No *criar_no(int pessoa)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
    {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(1);
    }
    novo->pessoa = pessoa;
    novo->proximo = NULL;
    return novo;
}

// Inicializa a lista
Lista *criar_lista()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    if (lista == NULL)
    {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(1);
    }
    lista->inicio = NULL;
    lista->fim = NULL;
    return lista;
}

// Insere no final da lista
void inserir_final(Lista *lista, int pessoa)
{
    No *novo = criar_no(pessoa);

    if (lista->inicio == NULL)
    {
        // Lista vazia
        lista->inicio = novo;
        lista->fim = novo;
    }
    else
    {
        // Lista não vazia
        lista->fim->proximo = novo;
        lista->fim = novo;
    }
}

// Busca um nó com determinada pessoa (retorna o ponteiro do nó)
No *buscar_no(Lista *lista, int pessoa)
{
    No *atual = lista->inicio;

    while (atual != NULL)
    {
        if (atual->pessoa == pessoa)
        {
            return atual;
        }
        atual = atual->proximo;
    }

    return NULL;
}

// Insere pessoa p depois da pessoa e
void inserir_depois(Lista *lista, int e, int p)
{
    No *no_e = buscar_no(lista, e);

    if (no_e == NULL)
    {
        return; // Não deveria acontecer segundo o enunciado
    }

    No *novo = criar_no(p);
    novo->proximo = no_e->proximo;
    no_e->proximo = novo;

    // Se e era o último, atualiza o fim
    if (no_e == lista->fim)
    {
        lista->fim = novo;
    }
}

// Remove uma pessoa da lista
void remover(Lista *lista, int pessoa)
{
    if (lista->inicio == NULL)
    {
        return;
    }

    // Caso especial: remover o primeiro
    if (lista->inicio->pessoa == pessoa)
    {
        No *temp = lista->inicio;
        lista->inicio = lista->inicio->proximo;

        // Se era o único elemento
        if (lista->inicio == NULL)
        {
            lista->fim = NULL;
        }

        free(temp);
        return;
    }

    // Busca o nó anterior ao que será removido
    No *anterior = lista->inicio;
    while (anterior->proximo != NULL && anterior->proximo->pessoa != pessoa)
    {
        anterior = anterior->proximo;
    }

    if (anterior->proximo == NULL)
    {
        return; // Não encontrou
    }

    No *temp = anterior->proximo;
    anterior->proximo = temp->proximo;

    // Se removeu o último
    if (temp == lista->fim)
    {
        lista->fim = anterior;
    }

    free(temp);
}

// Conta quantos inimigos estão entre a e b (excluindo ambos)
int contar_entre(Lista *lista, int a, int b)
{
    No *atual = lista->inicio;

    // Encontra a
    while (atual != NULL && atual->pessoa != a)
    {
        atual = atual->proximo;
    }

    if (atual == NULL)
    {
        return 0; // Não encontrou a
    }

    // Pula o a e começa a contar
    atual = atual->proximo;
    int contador = 0;

    while (atual != NULL && atual->pessoa != b)
    {
        contador++;
        atual = atual->proximo;
    }

    return contador;
}

// Libera toda a lista
void liberar_lista(Lista *lista)
{
    No *atual = lista->inicio;

    while (atual != NULL)
    {
        No *temp = atual;
        atual = atual->proximo;
        free(temp);
    }

    free(lista);
}

int main()
{
    int N;
    scanf("%d", &N);

    Lista *lista = criar_lista();

    // Lê a lista inicial
    for (int i = 0; i < N; i++)
    {
        int pessoa;
        scanf("%d", &pessoa);
        inserir_final(lista, pessoa);
    }

    int Q;
    scanf("%d", &Q);

    // Processa as operações
    for (int i = 0; i < Q; i++)
    {
        char operacao;
        scanf(" %c", &operacao);

        if (operacao == 'I')
        {
            int p, e;
            scanf("%d %d", &p, &e);
            inserir_depois(lista, e, p);
        }
        else if (operacao == 'R')
        {
            int e;
            scanf("%d", &e);
            remover(lista, e);
        }
        else if (operacao == 'Q')
        {
            int a, b;
            scanf("%d %d", &a, &b);
            int resultado = contar_entre(lista, a, b);
            printf("%d\n", resultado);
        }
    }

    // Libera a memória
    liberar_lista(lista);

    return 0;
}