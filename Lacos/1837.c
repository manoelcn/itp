#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, q, r;
    
    scanf("%d %d", &a, &b);

    if (b > 0) {
        q = a / b;
        r = a % b;
    } else {
        q = a / b;
        r = a % b;
    }

    if (r < 0) {
        r += abs(b);
        if (b > 0) {
            q--;
        } else {
            q++;
        }
    }
    
    printf("%d %d\n", q, r);

    return 0;
}