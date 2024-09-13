#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S[100];

    fgets(S, 100, stdin);
    if (strlen(S) > 0 && S[strlen(S) - 1] == '\n') {
        S[strlen(S) - 1] = '\0';
    }

    int left = 0;
    int right = strlen(S) - 1;
    int isPalindromo = 1;

    while (left < right) {
        if (isspace(S[left])) {
            left++;
            continue;
        }
        if (isspace(S[right])) {
            right--;
            continue;
        }

        if (tolower(S[left]) != tolower(S[right])) {
            isPalindromo = 0;
            break;
        }

        left++;
        right--;
    }

    printf("%d\n", isPalindromo);
    return 0;
}