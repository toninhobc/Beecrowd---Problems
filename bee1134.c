#include <stdio.h>

int main() {

    int code; 
    int alcool = 0;
    int gas = 0;
    int diesel = 0;

    printf("MUITO OBRIGADO\n");

    for(;;) {

        scanf("%d", &code);

        if(code == 1) {
            alcool++;
        }
        else if(code == 2) {
            gas++;
        }
        else if(code == 3) {
            diesel++;
        }
        else if(code == 4) {
            break;
        }
        
    }

    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", diesel);

    return 0;
}