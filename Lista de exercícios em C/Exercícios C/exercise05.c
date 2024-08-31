#include <stdio.h>

int main(){
    int numero;
    int somaPares = 0;
    int somaImpares = 0;
    int somaTotal = 0;

    while (numero != 0) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (numero % 2 == 0) {
            somaPares += numero;
        } else {
            somaImpares += numero;
        }
        somaTotal += numero;
    }

    printf("%d\n", somaPares);
    printf("%d\n", somaImpares);
    printf("%d\n", somaTotal);

    return 0;
}