#include <stdio.h>

int main() {
    int E, B, N, V;
    float percentualBrancos, percentualNulos, percentualValidos, percentualAusentes;

    printf("Digite o número total de eleitores: ");
    scanf("%d", &E);

    printf("Digite o número de votos brancos: ");
    scanf("%d", &B);

    printf("Digite o número de votos nulos: ");
    scanf("%d", &N);

    printf("Digite o número de votos válidos: ");
    scanf("%d", &V);

    percentualBrancos = (float)B / E * 100;
    percentualNulos = (float)N / E * 100;
    percentualValidos = (float)V / E * 100;
    percentualAusentes = 100 - percentualBrancos - percentualNulos - percentualValidos;

    printf("Percentual de votos brancos: %.2f%%\n", percentualBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentualNulos);
    printf("Percentual de votos válidos: %.2f%%\n", percentualValidos);
    printf("Percentual de ausentes: %.2f%%\n", percentualAusentes);

    return 0;
}
