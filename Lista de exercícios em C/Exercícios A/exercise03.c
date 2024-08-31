#include <stdio.h>

int main() {
    float n1, n2;
    printf("Digite duas notas: ");
    scanf("%f %f", &n1, &n2);
    printf("Média: %.2f",(n1+n2)/2);
}