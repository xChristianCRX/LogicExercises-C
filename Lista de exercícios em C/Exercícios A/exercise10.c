#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
