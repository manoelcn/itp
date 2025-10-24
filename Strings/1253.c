#include <stdio.h>
#include <string.h>

void decodificar(char *mensagem, int deslocamento) {
    int i;
    int len = strlen(mensagem);
    
    for (i = 0; i < len; i++) {
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = ((mensagem[i] - 'A' - deslocamento + 26) % 26) + 'A';
        }
    }
}

int main() {
    int N;
    char mensagem[51];
    int deslocamento;
    
    scanf("%d", &N);
    getchar();
    
    for (int i = 0; i < N; i++) {
        fgets(mensagem, sizeof(mensagem), stdin);
        
        int len = strlen(mensagem);
        if (len > 0 && mensagem[len - 1] == '\n') {
            mensagem[len - 1] = '\0';
        }
        
        scanf("%d", &deslocamento);
        getchar();
        
        decodificar(mensagem, deslocamento);
        
        printf("%s\n", mensagem);
    }
    
    return 0;
}
