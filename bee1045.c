#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    float a, b, c;
    
    // Leitura dos dados de entrada
    scanf("%f %f %f", &a, &b, &c);
    
    // Condicionais para ordenar os números
    if(a < b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if(a < c) {
        float temp = a;
        a = c;
        c = temp;
    }
    if(b < c) {
        float temp = b;
        b = c;
        c = temp;
    }
    
    // Condicionais para definir os triângulos
    if(a >= (b + c)) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(a * a == (b * b + c * c)) {
        printf("TRIANGULO RETANGULO\n");
    }
    if(a * a > (b * b + c * c)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a * a < (b * b + c * c)) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && b == c) {
        printf("TRIANGULO EQUILATERO\n");
        return 0;
    }
    if(a == b || a == c || b == c) {
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
    
}