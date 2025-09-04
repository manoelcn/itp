#include <stdio.h>
#include <math.h>

void calcular_bhaskara(double a, double b, double c){

    double r1, r2, delta;

    if(a == 0){

        printf("Impossivel calcular\n");

    }
    else{

        delta = sqrt(pow(b, 2) - (4*a*c));

        if (isnan(delta)){
            printf("Impossivel calcular\n");
        }
        else{
            r1 = (-b + delta) / (2*a);
            r2 = (-b - delta) / (2*a);

            printf("R1 = %.5f\n", r1);
            printf("R2 = %.5f\n", r2);
        }
    }
}

int main(){
    
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    calcular_bhaskara(a, b, c);

    return 0;
}