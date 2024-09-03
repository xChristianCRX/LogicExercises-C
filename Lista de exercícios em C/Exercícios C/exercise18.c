#include <stdio.h>

int main(){
    int A, B, resultado = 0;

    scanf("%d", &A);
    scanf("%d", &B);

    for (int i = 0; i < B; i++) {
        resultado += A;
    }
    printf("%d\n", resultado);

    return 0;
}