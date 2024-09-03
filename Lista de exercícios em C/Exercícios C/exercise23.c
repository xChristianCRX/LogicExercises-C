#include <stdio.h>

int main(){
    int A;

    scanf("%d", &A);

    int velas[A];
    int max_altura = 0;
    int count_max = 0;

    for (int i = 0; i < A; i++) {
        scanf("%d", &velas[i]);
        if (velas[i] > max_altura) {
            max_altura = velas[i];
            count_max = 1;
        } else if (velas[i] == max_altura) {
            count_max++;
        }
    }
    printf("%d\n", count_max);

    return 0;
}