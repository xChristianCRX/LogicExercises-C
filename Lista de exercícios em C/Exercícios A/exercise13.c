#include <stdio.h>

int main() {
    int S, dias, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &S);

    dias = S / 86400;       // 1 dia tem 86400 segundos (24 * 60 * 60)
    S = S % 86400;          // Resto para os segundos restantes

    horas = S / 3600;       // 1 hora tem 3600 segundos (60 * 60)
    S = S % 3600;           // Resto para os segundos restantes

    minutos = S / 60;       // 1 minuto tem 60 segundos
    segundos = S % 60;      // O que sobra são os segundos restantes

    printf("%d dias, %d horas, %d minutos e %d segundos\n", dias, horas, minutos, segundos);

    return 0;
}
