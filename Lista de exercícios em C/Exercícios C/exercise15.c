#include <stdio.h>
#include <math.h>

int main(){
    int N, isPrime = 1;
    scanf("%d", &N);

    if (N < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    printf("%d\n", isPrime);

    return 0;
}