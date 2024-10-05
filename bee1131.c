#include <stdio.h>

int main() {

    int ginter, ggremio, opcao;
    int vinter = 0;
    int vgremio = 0;
    int empates = 0;
    int count = 0;

    do {

        scanf("%d %d", &ginter, &ggremio);

        if(ginter > ggremio) {
            vinter++;
        }
        else if (ginter < ggremio) {
            vgremio++;
        }
        else {
            empates++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);

        count++;

    } while(opcao != 2);

    printf("%d grenais\n", count);
    printf("Inter:%d\n", vinter);
    printf("Gremio:%d\n", vgremio);
    printf("Empates:%d\n", empates);

    if(vinter > vgremio) {
        printf("Inter venceu mais\n");
    }
    else if(vinter < vgremio) {
        printf("Gremio venceu mais\n");
    }
    else {
        printf("Nao houve vencedor\n");
    }

    return 0;
    
}