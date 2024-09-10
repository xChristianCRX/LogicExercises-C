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

    int maior_valor = valores[0];
    int posicao_maior = 0;
    for (int i = 1; i < N; i++) {
        if (valores[i] > maior_valor) {
            maior_valor = valores[i];
            posicao_maior = i;
        }
    }

    printf("%d\n", maior_valor);
    printf("%d\n", posicao_maior);

    free(valores);

    return 0;
}