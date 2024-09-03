#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    int num;
    int maior1 = 0;
    int maior2 = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num > maior1) {
            maior2 = maior1;
            maior1 = num;
        } else if (num > maior2) {
            maior2 = num;
        }
    }

    printf("%d %d\n", maior1, maior2);

    return 0;
}