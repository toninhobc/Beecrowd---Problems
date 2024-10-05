#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d\n", &n);
    char frase[51];
    char result[51];

    for (int i = 0; i < n; i++)
    {
        memset(frase, 0, sizeof(frase));
        memset(result, 0, sizeof(result));
        
        gets(frase);

        int index = 0;
        int ponto = 1;

        for (int j = 0, len = strlen(frase); j < len; j++)
        {
            if (frase[j] == ' ')
                ponto = 1;
            else if (ponto == 1)
            {
                ponto = 0;
                result[index] = frase[j];
                index++;
            }
        }

        printf("%s\n", result);
    }

    return 0;
}
