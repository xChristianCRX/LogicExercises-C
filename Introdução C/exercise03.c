#include <stdio.h>

int main(){
    float x, y, z;
    printf("Insira três números: ");
    scanf("%f %f %f", &x, &y, &z);

    if((x > y+z) || (y > x+z) || (z > x+y)){
        printf("Não pode ser um triângulo!");
    }else{
        if((x == y) && (x == z) && (y == z)){
            printf("É um triângulo equilátero!");
        }else if((x != z) && (x != y) && (y != z)){
            printf("Triângulo escaleno!");
        }else{
            printf("Triângulo isósceles!");
        }
    }
}