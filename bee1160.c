#include <stdio.h>

int ultrapassagem(int pa, int pb, double g1, double g2) {

    int anos = 0;

    while(pa <= pb) {

        pa += pa * (g1 / 100);
        pb += pb * (g2 / 100);

        anos++;

        if(anos > 100) {

            return 101;

        }
    }

    return anos;

}

int main() {

    int t; 

    scanf("%d", &t);

    while(t--) {

        int pa, pb;
        double g1, g2;

        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        int anos = ultrapassagem(pa, pb, g1, g2);

        if(anos <= 100) {
            printf("%d anos.\n", anos);
        }
        else {
            printf("Mais de 1 seculo.\n");
        }
    }

    return 0;

}