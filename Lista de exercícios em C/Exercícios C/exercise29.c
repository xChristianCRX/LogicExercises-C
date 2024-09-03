#include <stdio.h>

int main(){
    int N, original, revertido = 0, resto;

    scanf("%d", &N);

    original = N;

    while (N != 0) {
        resto = N % 10;
        revertido = revertido * 10 + resto;
        N /= 10;
    }

    if (original == revertido) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}