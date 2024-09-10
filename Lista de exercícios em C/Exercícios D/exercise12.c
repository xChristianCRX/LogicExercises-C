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

    int minIndex = 0;
    for (int i = 1; i < N; i++) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
    }

    int temp = A[0];
    A[0] = A[minIndex];
    A[minIndex] = temp;

    int maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    temp = A[N - 1];
    A[N - 1] = A[maxIndex];
    A[maxIndex] = temp;

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    free(A);

    return 0;
}