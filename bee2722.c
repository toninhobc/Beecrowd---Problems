#include <stdio.h>
#include <string.h>

void decifrar_nome(char *linha1, char *linha2, char *resultado) {
    int i = 0, j = 0, k = 0;
    int tam1 = strlen(linha1);
    int tam2 = strlen(linha2);

    // Alternar entre pares de letras da linha1 e linha2
    while (i < tam1 || j < tam2) {
        // Copiar até duas letras da linha1
        if (i < tam1) {
            resultado[k++] = linha1[i++];
        }
        if (i < tam1) {
            resultado[k++] = linha1[i++];
        }
        
        // Copiar até duas letras da linha2
        if (j < tam2) {
            resultado[k++] = linha2[j++];
        }
        if (j < tam2) {
            resultado[k++] = linha2[j++];
        }
    }
    
    resultado[k] = '\0'; // Finalizar a string
}

int main() {
    int n;
    scanf("%d", &n);
    
    char linha1[101], linha2[101], resultado[202];

    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", linha1); // Ler a primeira linha
        scanf(" %[^\n]", linha2); // Ler a segunda linha
        decifrar_nome(linha1, linha2, resultado);
        printf("%s\n", resultado); // Imprimir o nome decifrado
    }

    return 0;
}
