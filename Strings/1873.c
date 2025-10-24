#include <stdio.h>
#include <string.h>

int quem_vence(char *rajesh, char *sheldon) {
    
    if (strcmp(rajesh, sheldon) == 0) {
        return 0;
    }
    
    if (strcmp(rajesh, "tesoura") == 0 && 
        (strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "lagarto") == 0)) {
        return 1;
    }
    
    if (strcmp(rajesh, "papel") == 0 && 
        (strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "spock") == 0)) {
        return 1;
    }
    
    if (strcmp(rajesh, "pedra") == 0 && 
        (strcmp(sheldon, "lagarto") == 0 || strcmp(sheldon, "tesoura") == 0)) {
        return 1;
    }
    
    if (strcmp(rajesh, "lagarto") == 0 && 
        (strcmp(sheldon, "spock") == 0 || strcmp(sheldon, "papel") == 0)) {
        return 1;
    }
    
    if (strcmp(rajesh, "spock") == 0 && 
        (strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "pedra") == 0)) {
        return 1;
    }

    return 2;
}

int main() {
    int C;
    char rajesh[20], sheldon[20];
    
    scanf("%d", &C);
    
    for (int i = 0; i < C; i++) {
        scanf("%s %s", rajesh, sheldon);
        
        int resultado = quem_vence(rajesh, sheldon);
        
        if (resultado == 0) {
            printf("empate\n");
        } else if (resultado == 1) {
            printf("rajesh\n");
        } else {
            printf("sheldon\n");
        }
    }
    
    return 0;
}
