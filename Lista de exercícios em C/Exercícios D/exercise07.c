#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *valores;

    scanf("%d", &N);

    valores = (int *)malloc(N * sizeof(int));
    if (valores == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < N - 1; i += 2) {
        int temp = valores[i];
        valores[i] = valores[i + 1];
        valores[i + 1] = temp;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", valores[i]);
    }
    free(valores);

    return 0;
}