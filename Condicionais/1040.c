#include <stdio.h>

int main() {

    float nota1, nota2, nota3, nota4, media, nota_exame, media_exame;

    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / 10;

    if (media >= 7.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9) {
        scanf("%f", &nota_exame);
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", nota_exame);
        media_exame = (media + nota_exame) / 2;
        if (media_exame >= 5.0) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media_exame);
        }
        else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media_exame);
        }
    }
    else {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }

    

    return 0;
}