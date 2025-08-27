#include <stdio.h>

int main() {

    int quantidade_casos, figurinhas_ricardo, figurinhas_vicente, a, b, resto;
    
    scanf("%d", &quantidade_casos);
    
    for (int i = 0; i < quantidade_casos; i++) {

        scanf("%d %d", &figurinhas_ricardo, &figurinhas_vicente);
        
        a = figurinhas_ricardo;
        b = figurinhas_vicente;
        
        while (b != 0) {
            resto = a % b;
            a = b;
            b = resto;
        }
        
        printf("%d\n", a);
    }
    
    return 0;
}