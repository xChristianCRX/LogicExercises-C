#include <stdio.h>

int main(){
    int N, numero;
    int maior, menor, soma = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numero);
        if(i == 0){
            maior = numero;
            menor = numero;
        }
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        soma += numero;
    }

    printf("%d\n", maior);
    printf("%d\n", menor);
    printf("%d\n", soma);

    return 0;
}