#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, I, J;
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
    
    scanf("%d %d", &I, &J);

    if (I < 0 || I >= N || J < 0 || J >= N) {
        printf("INVALIDO\n");
    } else {
        int soma = 0;
        for (int i = I; i <= J; i++) {
            soma += valores[i];
        }
        printf("%d\n", soma);
    }

    free(valores);

    return 0;
}