#include <stdio.h>

int main() {

    int t, n, i, total_pedidos;
    
    while (1) {
        scanf("%d", &t);

        if (t == 0){
            break;
        }
        
        for (i = 0; i < t; i++) {
            scanf("%d", &n);

            total_pedidos = 2 * n - 2;

            if (n % 2 != 0){
                total_pedidos = (n - 1) * 2 + 1;
            }else{
                total_pedidos = (n - 2) * 2 + 2;
            }

            printf("%d\n", total_pedidos);
        }
    }
    
    return 0;
}