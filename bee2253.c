#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char string[50];

    while(scanf("%[^\n]%*c", string) != EOF)
    {
        int upper = 0, lower = 0, digit = 0;
        int len = strlen(string);

        if (len < 6 || len > 32)
        {
            printf("Senha invalida.\n");
            continue;
        }

        int valid = 1;

        for (int i = 0; i < len; i++)
        {
            if (isupper(string[i]))
                upper++;
            else if (islower(string[i]))
                lower++;
            else if (isdigit(string[i]))
                digit++;
            else if (!isalnum(string[i]))
            {
                valid = 0;
                break;
            }
        }

        if (!valid || digit == 0 || upper == 0 || lower == 0)
            printf("Senha invalida.\n");
        else
            printf("Senha valida.\n");
    }

    return 0;
}
