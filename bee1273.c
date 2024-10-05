#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        char word[n][51];
        int len = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%s", word[i]);

            if (strlen(word[i]) > len)
                len = strlen(word[i]);
        }

        for (int i = 0; i < n; i++)
        {
            int spaces = len - strlen(word[i]);

            for (int j = 0; j < spaces; j++)
            {
                printf(" ");
            }

            printf("%s\n", word[i]);
        }

        scanf("%d", &n);

        if (n != 0) printf("\n");
    }

    return 0;
}