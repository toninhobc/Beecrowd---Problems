#include <stdio.h>

int main() {

    int x, z, i;
    int valores = 0;

    scanf("%d", &x);

    do {

        scanf("%d", &z);

    } while(x >= z);

    for(i = x; valores <= z; i++) {

        valores += i;

    }

    printf("%d\n", i - x);

    return 0;
    
}