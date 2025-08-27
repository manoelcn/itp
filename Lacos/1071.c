#include <stdio.h>

int main(){

    int x, y, z, soma, i;
    soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){
        z = x;
        x = y;
        y = z;
    }

    for(i = x + 1; i < y; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}