#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehconsoante(char c);
int sobrenome_ehfacil(char sobrenome[]);

int main(void)
{
    int n;
    char sobrenome[43];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", sobrenome);

        if (sobrenome_ehfacil(sobrenome))
        {
            printf("%s eh facil\n", sobrenome);
        }
        else
        {
            printf("%s nao eh facil\n", sobrenome);
        }
    }

    return 0;
}

int sobrenome_ehfacil(char sobrenome[])
{
    int consec = 0;
    for (int i = 0; i < strlen(sobrenome); i++)
    {
        if (ehconsoante(sobrenome[i]))
        {
            consec++;

            if (consec == 3) return 0;
        }
        else consec = 0;
    }

    return 1;
}

int ehconsoante(char c)
{
    c = tolower(c);
    return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && isalpha(c));
}
