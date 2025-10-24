#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validar_ra(char *ra) {
    int len = strlen(ra);
    
    if (len != 20) {
        return 0;
    }
    
    // Verifica se inicia com "RA"
    if (ra[0] != 'R' || ra[1] != 'A') {
        return 0;
    }
    
    for (int i = 2; i < 20; i++) {
        if (!isdigit(ra[i])) {
            return 0;
        }
    }
    
    return 1;
}

void extrair_senha(char ra[], char senha[]) {
    int i;
    int inicio = -1;
    
    for (i = 2; i < 20; i++) {
        if (ra[i] != '0') {
            inicio = i;
            break;
        }
    }
    
    if (inicio == -1) {
        strcpy(senha, "0");
        return;
    }
    
    int j = 0;
    for (i = inicio; i < 20; i++) {
        senha[j++] = ra[i];
    }
    senha[j] = '\0';
}

int main() {
    int N;
    char ra[101];
    char senha[20];
    
    scanf("%d", &N);
    getchar();
    
    for (int i = 0; i < N; i++) {
        fgets(ra, sizeof(ra), stdin);
        
        int len = strlen(ra);
        if (len > 0 && ra[len - 1] == '\n') {
            ra[len - 1] = '\0';
        }
        
        if (validar_ra(ra)) {
            extrair_senha(ra, senha);
            printf("%s\n", senha);
        } else {
            printf("INVALID DATA\n");
        }
    }
    
    return 0;
}
