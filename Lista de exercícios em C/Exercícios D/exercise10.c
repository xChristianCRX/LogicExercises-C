#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *A, *B;
    int countA = 0, countB = 0;

    scanf("%d", &N);

    A = (int *)malloc(N * sizeof(int));
    B = (int *)malloc(N * sizeof(int));
    if (A == NULL || B == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        int valor;
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            A[countA++] = valor;
        } else {
            B[countB++] = valor;
        }
    }

    for (int i = 0; i < countA; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }
    free(A);
    free(B);

    return 0;
}