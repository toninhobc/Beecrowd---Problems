#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, n, j, alit;
    char string[10000], initials[101];

    while (scanf("%[^\n]s", string) != EOF)
    {
        getchar();

        n = strlen(string);

        for (i = 0; i < n; i++)
        {
            if (string[i] >= 65 && string[i] <= 90)
            {
                string[i] += 32;
            }
        }

        initials[0] = string[0];
        j = 1;

        for (i = 1; i < n; i++)
        {
            if (string[i - 1] == ' ')
            {
                initials[j] = string[i];
                j++;
            }
        }

        initials[j] = '\0';
        n = j;
        alit = 0;

        for (i = 1; i < n; i++)
        {
            j = i - 1;

            while (i < n && initials[i] == initials[i - 1])
            {
                i++;
            }

            if (i - j > 1) alit++;
        }

        printf("%d\n", alit);
    }

    return 0;
}
