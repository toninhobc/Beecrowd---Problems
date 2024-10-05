#include <stdio.h>

int main() {

    int n, hrs, min, seg;

    scanf("%d", &n);

    hrs = n / 3600;
    min = (n % 3600) / 60;
    seg = (n % 3600) % 60;

    printf("%d:%d:%d\n", hrs, min, seg);

    return 0;

}