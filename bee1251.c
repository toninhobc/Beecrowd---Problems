#include <stdio.h>
#include <string.h>

typedef struct
{
    char c;
    int freq;
}Frase;

void sort(Frase* string);

int main(void)
{
    char string[1001];

    if (scanf("%s", string) == EOF)
    {
        return 0;
    }

    while (1)
    {
        Frase frase[255];

        for (int i = 0; i < 255; i++)
        {
            frase[i].c = i;
            frase[i].freq = 0;
        }

        for (int i = 0, len = strlen(string); i < len; i++)
        {
            frase[(int)(string[i])].freq += 1;
        }

        sort(frase);

        for (int i = 0; i < 255; i++)
        {
            if (frase[i].freq != 0)
            {
                printf("%d %d\n", frase[i].c, frase[i].freq);
            }
        }

        if (scanf("%s", string) != EOF) printf("\n");
        else break;
    }

    return 0;
}

void sort(Frase* string)
{
    for (int i = 0; i < 255; i++)
    {
        for (int j = (i+1); j < 255; j++)
        {
            if (string[i].freq > string[j].freq)
            {
                Frase temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
            if (string[i].freq == string[j].freq)
            {
                if (string[i].c < string[j].c)
                {
                    Frase temp = string[i];
                    string[i] = string[j];
                    string[j] = temp;
                }
            }
        }
    }

    return;
}
