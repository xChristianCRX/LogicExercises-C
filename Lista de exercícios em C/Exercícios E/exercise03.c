#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    char C;
    int contador = 0;

    scanf("%s", S);
    scanf(" %c", &C);

    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == C) {
            contador++;
        }
    }
    printf("%d\n", contador);

    return 0;
}