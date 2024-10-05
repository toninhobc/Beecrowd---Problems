#include <stdio.h>
#include <string.h>

void decifrar(char linha[]);

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        char crazy[101];
        gets(crazy);

        crazy[strcspn(crazy, "\n")] = '\0';

        decifrar(crazy);
    }

    return 0;
}

void decifrar(char linha[])
{
    int len = strlen(linha);
    char left[51], right[51];

    strncpy(left, linha, len / 2);
    left[len / 2] = '\0';
    strncpy(right, linha + len / 2, len / 2);
    right[len / 2] = '\0';

    for (int i = 0; i < len / 2 / 2; i++)
    {
        char temp = left[i];
        left[i] = left[len / 2 - 1 - i];
        left[len / 2 - 1 - i] = temp;
    }

    for (int i = 0; i < len / 2 / 2; i++)
    {
        char temp = right[i];
        right[i] = right[len / 2 - 1 - i];
        right[len / 2 - 1 - i] = temp;
    }

    printf("%s%s\n", left, right);
}
