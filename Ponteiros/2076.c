#include <stdio.h>
#include <stdlib.h>

#define MOD 1300031

// Função para calcular o MDC (Máximo Divisor Comum)
long long mdc(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função para calcular o MMC (Mínimo Múltiplo Comum)
long long mmc(long long a, long long b)
{
    return (a / mdc(a, b)) * b;
}

// Calcula a soma dos múltiplos de 'divisor' no intervalo [I, F]
long long soma_multiplos(long long I, long long F, long long divisor)
{
    if (divisor > F)
        return 0;

    // Primeiro múltiplo >= I
    long long primeiro = ((I + divisor - 1) / divisor) * divisor;

    if (primeiro > F)
        return 0;

    // Último múltiplo <= F
    long long ultimo = (F / divisor) * divisor;

    // Quantidade de múltiplos
    long long quantidade = (ultimo - primeiro) / divisor + 1;

    // Soma usando PA: n * (primeiro + último) / 2
    // Aplicando módulo para evitar overflow
    quantidade %= MOD;
    primeiro %= MOD;
    ultimo %= MOD;

    long long soma = (quantidade * ((primeiro + ultimo) % MOD)) % MOD;

    // Precisamos dividir por 2 (multiplicar pelo inverso modular de 2)
    // Como MOD é primo, inverso de 2 mod MOD é (MOD + 1) / 2
    soma = (soma * ((MOD + 1) / 2)) % MOD;

    return soma;
}

// Função recursiva para aplicar o Princípio da Inclusão-Exclusão
long long inclusao_exclusao(long long I, long long F, long long *lista, int N,
                            int index, long long lcm_atual, int count)
{
    if (index == N)
    {
        if (count == 0)
            return 0;

        long long soma = soma_multiplos(I, F, lcm_atual);

        // Se count é ímpar, adicionamos; se é par, subtraímos
        if (count % 2 == 1)
        {
            return soma;
        }
        else
        {
            return (MOD - soma) % MOD;
        }
    }

    // Não incluir o elemento atual
    long long resultado = inclusao_exclusao(I, F, lista, N, index + 1, lcm_atual, count);

    // Incluir o elemento atual
    long long novo_lcm;
    if (count == 0)
    {
        novo_lcm = lista[index];
    }
    else
    {
        novo_lcm = mmc(lcm_atual, lista[index]);
        // Se o LCM ficar muito grande, não vale a pena continuar
        if (novo_lcm > F)
        {
            return resultado;
        }
    }

    resultado = (resultado + inclusao_exclusao(I, F, lista, N, index + 1, novo_lcm, count + 1)) % MOD;

    return resultado;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long I, F;
        int N;
        scanf("%lld %lld %d", &I, &F, &N);

        // Alocação dinâmica para a lista de aplicações
        long long *lista = (long long *)malloc(N * sizeof(long long));

        if (lista == NULL)
        {
            fprintf(stderr, "Erro ao alocar memória\n");
            return 1;
        }

        // Leitura da lista
        for (int i = 0; i < N; i++)
        {
            scanf("%lld", &lista[i]);
        }

        // Calcula o resultado usando Inclusão-Exclusão
        long long resultado = inclusao_exclusao(I, F, lista, N, 0, 1, 0);

        printf("%lld\n", resultado);

        // Libera a memória alocada
        free(lista);
    }

    return 0;
}