#include <stdio.h>
#include <string.h>

int main()
{
    char maior_palavra[100];
    while (1)
    {
        char string[100];
        char *pedaco;
        scanf("%s", string);

        if (strcmp(string, "0") == 0)
        {
            break;
        }
        else
        {
            if ((int)strlen(string) >= (int)strlen(maior_palavra))
            {
                strcpy(maior_palavra, string);
            }

            pedaco = strtok(string, " ");
            if (pedaco != NULL)
            {
                printf("%d", (int)strlen(pedaco));
                pedaco = strtok(NULL, " ");

                while (pedaco != NULL)
                {
                    printf("-%d", (int)strlen(pedaco));
                    pedaco = strtok(NULL, " ");
                }
            }
        }
    }
    printf("The biggest word: %s\n", maior_palavra);

    return 0;
}