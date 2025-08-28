#include <stdio.h>

int main() {

    int n, k, total;
    
    while (scanf("%d", &n) != EOF) {
        k = 0;
        total = 1;
        
        while (total < n) {
            total *= 2;
            k++;
        }
        
        printf("%d\n", k);
    }
    
    return 0;
}