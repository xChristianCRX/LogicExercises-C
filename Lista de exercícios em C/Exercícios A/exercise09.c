#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz1, raiz2;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = (b * b) - 4 * a * c;

    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = (-b - sqrt(delta)) / (2 * a);

    printf("As raízes da equação são: %.2f e %.2f\n", raiz1, raiz2);

    return 0;
}
