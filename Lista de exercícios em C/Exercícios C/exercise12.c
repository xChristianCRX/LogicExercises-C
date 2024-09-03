#include <stdio.h>

int main(){
    int N, numero;
    int maior = 1;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
    }

    printf("%d", maior);
}