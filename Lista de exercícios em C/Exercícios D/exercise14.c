#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *A;

    scanf("%d", &N);

    A = (int *)malloc(N * sizeof(int));
    if (A == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N / 2; i++) {
        int temp = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = temp;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    free(A);

    return 0;
}