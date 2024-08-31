#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    if (idade < 16) {
        printf("DISPENSADO");
    } else if (idade >= 16 && idade <= 17) {
        printf("FACULTATIVO");
    } else if (idade >= 18 && idade <= 69) {
        printf("OBRIGATORIO");
    } else {
        printf("DISPENSADO");
    }

    return 0;
}