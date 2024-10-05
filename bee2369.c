#include <stdio.h>

int main() {

    int n, conta; 
    int ass_basica = 7; 
    

    scanf("%d", &n);

    if(n <= 10) {

        conta = ass_basica;

    }
    else if((n > 10) && (n <= 30)) {

        conta = (ass_basica + (n - 10));

    }
    else if((n > 30) && (n <= 100)) {

        conta = (ass_basica + 20 + ((n - 30) * 2));

    }
    else {

        conta = (ass_basica + 160 + ((n - 100) * 5));
    }

    printf("%d\n", conta);

    return 0;

}