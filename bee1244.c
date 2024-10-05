#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRINGS 50
#define MAX_LENGTH 50

typedef struct {
    char string[MAX_LENGTH + 1];
    int original_index;
} StringWithIndex;

int compare(const void *a, const void *b) {
    StringWithIndex *str1 = (StringWithIndex *)a;
    StringWithIndex *str2 = (StringWithIndex *)b;
    int len1 = strlen(str1->string);
    int len2 = strlen(str2->string);

    if (len1 == len2) {
        return str1->original_index - str2->original_index;  
    } else {
        return len2 - len1; 
    }
}

int main() {
    int n;
    scanf("%d\n", &n);  

    for (int i = 0; i < n; i++) {
        char input[MAX_STRINGS * (MAX_LENGTH + 1)];
        fgets(input, sizeof(input), stdin); 

        StringWithIndex words[MAX_STRINGS];
        int word_count = 0;
        char *token = strtok(input, " \n");

        while (token != NULL) {
            strcpy(words[word_count].string, token);
            words[word_count].original_index = word_count;
            word_count++;
            token = strtok(NULL, " \n");
        }

        qsort(words, word_count, sizeof(StringWithIndex), compare);

        for (int j = 0; j < word_count; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%s", words[j].string);
        }
        printf("\n");
    }

    return 0;
}
