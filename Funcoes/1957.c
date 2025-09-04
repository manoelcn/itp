#include <stdio.h>

void converter_para_hexadecimal(int valor){
    printf("%X\n", valor);
}

int main(){

    int v;

    scanf("%d", &v);

    if (v < 0){
        printf("Erro\n");
    }
    else{
        converter_para_hexadecimal(v);
    }

    return 0;
}