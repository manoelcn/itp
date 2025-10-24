#include <stdio.h>
#include <string.h>

int contar_diferencas(char *palavra, char *referencia) {
    int len1 = strlen(palavra);
    int len2 = strlen(referencia);
    
    if (len1 != len2) {
        return -1;
    }
    
    int diferencas = 0;
    for (int i = 0; i < len1; i++) {
        if (palavra[i] != referencia[i]) {
            diferencas++;
        }
    }
    
    return diferencas;
}

int reconhecer_palavra(char palavra[]) {
    char *referencias[] = {"one", "two", "three"};
    int valores[] = {1, 2, 3};
    
    for (int i = 0; i < 3; i++) {
        int diferencas = contar_diferencas(palavra, referencias[i]);
        
        if (diferencas >= 0 && diferencas <= 1) {
            return valores[i];
        }
    }
    
    return -1;
}

int main() {
    int N;
    char palavra[101];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%s", palavra);
        int resultado = reconhecer_palavra(palavra);
        printf("%d\n", resultado);
    }
    
    return 0;
}
