#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char frase[1001];
    getchar();

    for (int i = 0; i < n; i++)
    {
        int alfabeto[26] = {0};
        int count = 0;

        gets(frase);

        int len = strlen(frase);

        for (int j = 0; j < len; j++)
        {
            if (islower(frase[j]))
            {
                int index = frase[j] - 'a';
                if (alfabeto[index] == 0)
                {
                    alfabeto[index] = 1;
                }
            }
        }

        for (int j = 0; j < 26; j++)
        {
            if (alfabeto[j] == 1) count++;
        }

        if (count == 26)
            printf("frase completa\n");
        else if (count >= 13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }

    return 0;
}
