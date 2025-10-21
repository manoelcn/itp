#include <stdio.h>
#include <string.h>

int main(){
    char maior_palavra[100] = "";
    while (1){
        char string[100];
        scanf(" %[^\n]", string);

        if (strcmp(string, "0") == 0){
            break;
        }

        char copia[100];
        strcpy(copia, string);

        char *pedaco = strtok(copia, " ");
        if (pedaco != NULL){
            printf("%d", (int)strlen(pedaco));

            if ((int)strlen(pedaco) >= (int)strlen(maior_palavra)){
                strcpy(maior_palavra, pedaco);
            }

            pedaco = strtok(NULL, " ");
            while (pedaco != NULL){
                printf("-%d", (int)strlen(pedaco));

                if ((int)strlen(pedaco) >= (int)strlen(maior_palavra)){
                    strcpy(maior_palavra, pedaco);
                }

                pedaco = strtok(NULL, " ");
            }
        }
        printf("\n");
    }
    printf("The biggest word: %s\n", maior_palavra);

    return 0;
}