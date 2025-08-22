#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);


    if (a < b && a < c){
        if (b < c){
            printf("%i\n", a);
            printf("%i\n", b);
            printf("%i\n", c);

            printf("\n");

            printf("%i\n", a);
            printf("%i\n", b);
            printf("%i\n", c);

        }
        else{
            printf("%i\n", a);
            printf("%i\n", c);
            printf("%i\n", b);

            printf("\n");

            printf("%i\n", a);
            printf("%i\n", b);
            printf("%i\n", c);
        }
    }

    else if (b < a && b < c){
        if (a < c){
            printf("%i\n", b);
            printf("%i\n", a);
            printf("%i\n", c);

            printf("\n");

            printf("%i\n", a);
            printf("%i\n", b);
            printf("%i\n", c);
        }
        else{
            printf("%i\n", b);
            printf("%i\n", c);
            printf("%i\n", a);

            printf("\n");

            printf("%i\n", a);
            printf("%i\n", b);
            printf("%i\n", c);
        }
    }

    else if (c < a && c < b){
        if (b < a){
            printf("%i\n", c);
            printf("%i\n", b);
            printf("%i\n", a);

            printf("\n");

            printf("%i\n", a);
            printf("%i\n", b);
            printf("%i\n", c);
        }
        else{
            printf("%i\n", c);
            printf("%i\n", a);
            printf("%i\n", b);

            printf("\n");

            printf("%i\n", a);
            printf("%i\n", b);
            printf("%i\n", c);
        }
    }

    else{
        printf("Valores iguais\n");
    }

    return 0;
}