#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        char frase[201]; 
        int alpha[26] = {0};
        gets(frase);

        int max = -1;
        for (int j = 0, len = strlen(frase); j < len; j++)
        {
            if (isalpha(frase[j]))
            {
                alpha[tolower(frase[j]) - 'a']++;
                if (alpha[tolower(frase[j]) - 'a'] > max)
                {
                    max = alpha[tolower(frase[j]) - 'a'];
                }
            }
        }

        for (int j = 0; j < 26; j++)
        {
            if (alpha[j] == max)
            {
                printf("%c", 'a' + j);
            }
        }

        printf("\n");
    }

    return 0;
}