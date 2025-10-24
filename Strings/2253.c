#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarSenha(char *senha) {
    int tamanho = strlen(senha);
    
    if (tamanho < 6 || tamanho > 32) {
        return 0;
    }
    
    int temMaiuscula = 0;
    int temMinuscula = 0;
    int temNumero = 0;
    
    for (int i = 0; i < tamanho; i++) {
        char c = senha[i];
        
        if (isupper(c)) {
            temMaiuscula = 1;
        }
        else if (islower(c)) {
            temMinuscula = 1;
        }
        else if (isdigit(c)) {
            temNumero = 1;
        }
        else {
            return 0;
        }
    }
    
    if (temMaiuscula && temMinuscula && temNumero) {
        return 1;
    }
    
    return 0;
}

int main() {
    char senha[100];
    
    while (fgets(senha, sizeof(senha), stdin) != NULL) {
        senha[strcspn(senha, "\n")] = '\0';
        
        if (validarSenha(senha)) {
            printf("Senha valida.\n");
        } else {
            printf("Senha invalida.\n");
        }
    }
    
    return 0;
}