#include <stdio.h>
#include <ctype.h>  // Biblioteca necessária para usar as funções isupper e islower

int main() {
    int N;
    scanf("%d", &N);  // Ler o número de casos de teste

    for (int i = 0; i < N; i++) {
        char first_digit, letter, second_digit;
        scanf(" %c%c%c", &first_digit, &letter, &second_digit);

        int num1 = first_digit - '0';  // Converter o caractere do primeiro dígito para inteiro
        int num2 = second_digit - '0';  // Converter o caractere do segundo dígito para inteiro

        int result;
        if (num1 == num2) {
            result = num1 * num2;  // Se os dígitos forem iguais, mostrar o produto entre os dois dígitos
        } else if (isupper(letter)) {
            result = num2 - num1;  // Se a letra for maiúscula, subtrair o primeiro dígito do segundo
        } else if (islower(letter)) {
            result = num1 + num2;  // Se a letra for minúscula, somar ambos os dígitos
        }

        printf("%d\n", result);  // Imprimir o resultado
    }

    return 0;
}
