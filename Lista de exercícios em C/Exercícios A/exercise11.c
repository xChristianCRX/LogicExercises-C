#include <stdio.h>

int main() {
    float salarioFixo, totalVendas, comissao, totalReceber;

    printf("Digite o salário fixo do vendedor: ");
    scanf("%f", &salarioFixo);

    printf("Digite o total de vendas efetuadas no mês: ");
    scanf("%f", &totalVendas);

    comissao = totalVendas * 0.18;
    totalReceber = salarioFixo + comissao;

    printf("O total a receber no final do mês é: %.2f\n", totalReceber);

    return 0;
}
