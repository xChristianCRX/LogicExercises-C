#include <stdio.h>

int main(){
    int X, numero, contador = 0;

    scanf("%d", &X);

    while (numero >= 0) {
        scanf("%d", &numero);
        if (numero == X) {
            contador++;
        }
    }
    printf("%d", contador);

    return 0;
}