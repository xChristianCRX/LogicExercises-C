#include <stdio.h>
#include <math.h>

int ehPrimo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int N, soma = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (ehPrimo(i)) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}