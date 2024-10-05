#include <stdio.h>
#include <string.h>

int main() {
    char risada[51];  
    char vogais[51];  
    int j = 0;       

    scanf("%s", risada);

    for (int i = 0; i < strlen(risada); i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' ||
            risada[i] == 'o' || risada[i] == 'u') {
            vogais[j] = risada[i];
            j++;
        }
    }
    vogais[j] = '\0';  

    int is_palindrome = 1; 
    int len = strlen(vogais);

    for (int i = 0; i < len / 2; i++) {
        if (vogais[i] != vogais[len - 1 - i]) {
            is_palindrome = 0;  
            break;
        }
    }

    if (is_palindrome) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
