#include <stdio.h>

int main() {

    // Declaração de variáveis
    int cv, ce, cs, fv, fe, fs;
    int pc, pf;

    // Leitura da entrada de dados
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);

    // Cálculo de pc e pf
    pc = 3 * cv + ce;
    pf = 3 * fv + fe;

    // Condicionais para separar os possíveis casos
    if(pc > pf) {
        printf("C\n");
        return 0;
    }
    else if(pc < pf) {
        printf("F\n");
        return 0;
    }
    else if(pc == pf) {
        if(cs > fs) {
            printf("C\n");
        }
        else if(cs < fs) {
            printf("F\n");
        }
        else if(cs == fs) {
            printf("=\n");
        }
    }

    return 0;

}