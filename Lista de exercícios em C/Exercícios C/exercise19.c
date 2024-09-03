#include <stdio.h>

int multiplicar(int x, int y) {
    int resultado = 0;
    for (int i = 0; i < y; i++) {
        resultado += x;
    }
    return resultado;
}

int main(){
    int A, B, resultado = 1;

    scanf("%d", &A);
    scanf("%d", &B);

    for (int i = 0; i < B; i++) {
        resultado = multiplicar(resultado, A);
    }

    printf("%d\n", resultado);

    return 0;
}