#include <stdio.h>

int main() {
    float x, v1, v2, a, valorTotal;
    scanf("%f %f %f %f", &x, &v1, &v2, &a);
    if (a <= x) {
        valorTotal = a * v1;
    } else {
        valorTotal = a * v2;
    }
    printf("%.2f", valorTotal);

    return 0;
}
