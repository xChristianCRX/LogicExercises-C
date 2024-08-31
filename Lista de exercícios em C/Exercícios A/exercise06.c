#include <stdio.h>

int main(){
    float valorCompra, desconto, valorFinal;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite o valor do desconto (0 a 100): ");
    scanf("%f", &desconto);

    valorFinal = valorCompra - (valorCompra * (desconto / 100));

    printf("Valor final com desconto: %.2f\n", valorFinal);

    return 0;
}