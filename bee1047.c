#include <stdio.h>

int main() {

    int hi, mi, hf, mf;
    int dh, dm;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    dh = hf - hi;
    dm = mf - mi;

    if(dm < 0) {
        dh--;
        dm += 60;
    }

    if(dh < 0 || (dh == 0 && dm == 0)) {
        dh += 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);

    return 0;
}
