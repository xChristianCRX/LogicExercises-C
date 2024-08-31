#include <stdio.h>

int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X > Y) {
        printf("INVALIDO\n");
    } else {
        for (int i = X; i <= Y; i++) {
            printf("%d\n", i);
        }
        for (int i = Y; i >= X; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}