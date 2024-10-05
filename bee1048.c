#include <stdio.h>

int main() {

    float sal_antigo, sal_novo;
    float reajuste = 0;
    int percentual = 0;

    scanf("%f", &sal_antigo);

    if(sal_antigo >= 0.00 && sal_antigo <= 400.00) {
        reajuste += (sal_antigo * 0.15);
        percentual += 15;
    }
    else if(sal_antigo >= 400.01 && sal_antigo <= 800.00) {
        reajuste += (sal_antigo * 0.12);
        percentual += 12;
    }
    else if(sal_antigo >= 800.01 && sal_antigo <= 1200.00) {
        reajuste += (sal_antigo * 0.10);
        percentual += 10;
    }
    else if(sal_antigo >= 1200.01 && sal_antigo <= 2000.00) {
        reajuste += (sal_antigo * 0.07);
        percentual += 7;
    }
    else if(sal_antigo > 2000.00) {
        reajuste += (sal_antigo * 0.04);
        percentual += 4;
    }

    sal_novo = sal_antigo + reajuste;

    printf("Novo salario: %.2f\n", sal_novo);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}