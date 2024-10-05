#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 0;
    int gritos = 0;
    char entrada[8];

    while (gritos < 3)
    {
        gets(entrada);

        if (strcmp(entrada, "caw caw") == 0)
        {
            printf("%d\n", n);
            n = 0;
            gritos++;
        }
        else
        {
            if (entrada[0] == '*') n += 4;
            if (entrada[1] == '*') n += 2;
            if (entrada[2] == '*') n += 1;
        }
    }

    return 0;
}
