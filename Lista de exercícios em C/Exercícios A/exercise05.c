#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d%d", &a, &b);

    float divisao = (float)a / (float)b;
    printf("Divisão em float: %.2f\n", divisao);
    printf("Divisão: %d\n", a/b);
    printf("Resto da divisão: %d\n",a%b);
}