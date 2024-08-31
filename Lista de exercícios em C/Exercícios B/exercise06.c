#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta = (b * b) - 4 * a * c;

    if (delta < 0) {
        printf("nan\n");
    } else {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("%.2f\n", raiz1 + raiz2);
    }

    return 0;
}