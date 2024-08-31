#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura, custoLata, rendimentoLata, area, latasNecessarias, custoTotal;

    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);

    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    printf("Digite o valor da lata de tinta: ");
    scanf("%f", &custoLata);

    printf("Digite o rendimento da lata de tinta (em metros quadrados): ");
    scanf("%f", &rendimentoLata);

    area = largura * altura;
    latasNecessarias = ceil(area / rendimentoLata); // Arredonda para cima para garantir o número inteiro de latas
    custoTotal = latasNecessarias * custoLata;

    printf("Quantidade de latas necessárias: %.0f\n", latasNecessarias);
    printf("Custo total: %.2f\n", custoTotal);

    return 0;
}
