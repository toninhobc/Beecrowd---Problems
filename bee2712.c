#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char placas[n][101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", placas[i]);

        int len = strlen(placas[i]);

        if (len != 8 || placas[i][3] != '-')
        {
            printf("FAILURE\n");
            continue;
        }

        int valid = 1;

        for (int j = 0; j < 3; j++)
        {
            if (placas[i][j] < 'A' || placas[i][j] > 'Z')
            {
                valid = 0;
                break;
            }
        }

        for (int j = 4; j < 8; j++)
        {
            if (placas[i][j] < '0' || placas[i][j] > '9')
            {
                valid = 0;
                break;
            }
        }

        if (!valid) printf("FAILURE\n");
        else
        {
            int digit = placas[i][7] - '0';
            switch (digit)
            {
                case 1:
                case 2:
                    printf("MONDAY\n");
                    break;
                case 3:
                case 4:
                    printf("TUESDAY\n");
                    break;
                case 5:
                case 6:
                    printf("WEDNESDAY\n");
                    break;
                case 7:
                case 8:
                    printf("THURSDAY\n");
                    break;
                case 9:
                case 0:
                    printf("FRIDAY\n");
                    break;
                default:
                    printf("FAILURE\n");
                    break;
            }
        }
    }

    return 0;
}
