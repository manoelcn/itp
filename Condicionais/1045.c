#include <stdio.h>

int main() {
    
    double a, b, c, A, B, C;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b && a > c){
        A = a;
        if (b > c){
            B = b;
            C = c;
        }else{
            B = c;
            C = b;
        }    
    }
    else if(b > a && b > c){
        A = b;
        if (a > c){
            B = a;
            C = c;
        }else{
            B = c;
            C = a;
        }
    }
    else{
        A = c;
        if (a > b){
            B = a;
            C = b;
        }else{
            B = b;
            C = a;
        }
    }

    if (A >= (B + C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if ((A * A) == (B * B) + (C * C)){
        printf("TRIANGULO RETANGULO\n");
        }
        if ((A * A) > (B * B) + (C * C)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((A * A) < (B * B) + (C * C)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && A == C){
            printf("TRIANGULO EQUILATERO\n");
        }
        if (A == B && C != A || B == C && A != B || A == C && A != B){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}