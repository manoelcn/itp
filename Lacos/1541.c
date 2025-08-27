#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c, area_necessaria, lado;
    
    while (1) {
        scanf("%d", &a);
        if (a == 0){
            break;
        }
        
        scanf("%d %d", &b, &c);
        
        area_necessaria = (a * b * 100.0) / c;
        
        lado = sqrt(area_necessaria);
        
        printf("%d\n", lado);
    }
    
    return 0;
}