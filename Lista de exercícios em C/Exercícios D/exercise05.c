#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X;
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

    scanf("%d", &X);

    int contador = 0;
    for (int i = 0; i < N; i++) {
        if (valores[i] == X) {
            contador++;
        }
    }
    printf("%d\n", contador);
    free(valores);

    return 0;
}