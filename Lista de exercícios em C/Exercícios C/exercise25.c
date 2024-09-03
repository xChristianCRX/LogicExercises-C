#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    int num, prev_num;
    int crescente = 1, decrescente = 1;

    scanf("%d", &prev_num);

    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        if (num < prev_num) {
            crescente = 0;
        }
        if (num > prev_num) {
            decrescente = 0;
        }
        prev_num = num;
    }

    if (crescente) {
        printf("1\n");
    } else if (decrescente) {
        printf("-1\n");
    } else {
        printf("0\n");
    }

    return 0;
}