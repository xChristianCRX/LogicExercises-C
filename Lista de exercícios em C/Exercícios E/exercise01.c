#include <stdio.h>
#include <string.h>

int main() {
    char S[100];

    scanf("%s", S);

    int length = strlen(S);
    for (int i = 0; i < length; i++) {
        printf("%c ", S[i]);
    }
    printf("\n");

    return 0;
}