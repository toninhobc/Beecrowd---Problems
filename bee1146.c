#include <stdio.h>

int main() {
    int x, i;
    
    for(;;) {
        scanf("%d", &x);
        
        if(x == 0) {
            break;
        }
        
        for(i = 1; i <= x; i++) {
            printf("%d", i);
            
            // Se não for o último número, imprime um espaço
            if (i < x) {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
