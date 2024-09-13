#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    int **A = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(M * sizeof(int));
    }

    if (A == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int j = 0; j < M; j++) {
        int soma = 0;
        for (int i = 0; i < N; i++) {
            soma += A[i][j];
        }
        printf("%d\n", soma);
    }

    for (int i = 0; i < N; i++) {
        free(A[i]);
    }
    free(A);

    return 0;
}