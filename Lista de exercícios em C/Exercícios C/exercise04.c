#include <stdio.h>

int main(){
    int N, M, soma = 0;

    scanf("%d %d", &N, &M);

    if (N <= M) {
        for (int i = N; i <= M; i++) {
            soma += i;
        }
    } else {
        for (int i = M; i <= N; i++) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}