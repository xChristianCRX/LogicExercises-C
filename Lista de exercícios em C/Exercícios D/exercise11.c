#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X;
    int *A, *B;
    int countB = 0;

    scanf("%d", &N);

    A = (int *)malloc(N * sizeof(int));
    if (A == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &X);

    B = (int *)malloc(N * sizeof(int));
    if (B == NULL) {
        printf("Erro ao alocar memória.\n");
        free(A);
        return 1;
    }

    for (int i = 0; i < N; i++) {
        if (A[i] > X) {
            B[countB++] = A[i];
        }
    }

    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }
    free(A);
    free(B);

    return 0;
}