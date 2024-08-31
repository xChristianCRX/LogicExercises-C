#include <stdio.h>

int main(){
    int N;
    int a = 1, b = 1;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d", a);
        } else if (i == 2) {
            printf(" %d", b);
        } else {
            int temp = a + b;
            printf(" %d", temp);
            a = b;
            b = temp;
        }
    }
    printf("\n");

    return 0;
}