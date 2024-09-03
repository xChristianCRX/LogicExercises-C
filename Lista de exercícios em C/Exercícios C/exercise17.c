#include <stdio.h>

int fatorial(int num) {
    long long resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(){
    int N;
    int soma = 0;

    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        soma += fatorial(i);
    }

    printf("%d", soma);

    return 0;
}