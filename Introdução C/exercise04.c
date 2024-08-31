#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite o valor de A, B e C: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
        return 0;
    }else{
        float delta = (b*b) - 4 * (a) * (c);
        if(delta < 0){
            return 0;
        }else{
            if(delta == 0){
                float x = (-b + sqrt(delta))/(2*a);
                printf("O valor de X é: %.2f", x);
            }else{
                float x1 = (-b + sqrt(delta))/(2*a);
                float x2 = (-b - sqrt(delta))/(2*a);
                printf("O valor de X1 é: %.2f", x1);
                printf("O valor de X2 é: %.2f", x2);
            }
        }
    }
};