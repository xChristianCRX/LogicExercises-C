#include <stdio.h>

int main(){
    int N, soma_divisores = 0;

    scanf("%d", &N);

    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            soma_divisores += i;
        }
    }

    if (soma_divisores == N) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}