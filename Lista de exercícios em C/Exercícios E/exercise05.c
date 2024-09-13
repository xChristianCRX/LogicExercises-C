#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para remover espaços de uma string
void remove_spaces(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// Função para comparar duas strings ignorando espaços
int are_anagrams(char *str1, char *str2) {
    // Remover espaços das strings
    remove_spaces(str1);
    remove_spaces(str2);

    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Ordenar os caracteres das duas strings
    int len = strlen(str1);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if (str2[i] > str2[j]) {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    return strcmp(str1, str2) == 0;
}

int main() {
    char A[100], B[100];

    fgets(A, 100, stdin);
    fgets(B, 100, stdin);

    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';

    if (are_anagrams(A, B)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}