#include <stdio.h>

int main(){
    int A, B;
    int resultado = 1;

    scanf("%d %d", &A, &B);
    for (int i = 0; i < B; i++) {
        resultado *= A;
    }
    printf("%d\n", resultado);

    return 0;
}