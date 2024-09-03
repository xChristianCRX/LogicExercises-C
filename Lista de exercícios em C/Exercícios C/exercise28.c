#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    int num, prev_num;
    int comprimento_atual = 1, comprimento_maximo = 1;

    scanf("%d", &prev_num);

    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        if (num >= prev_num) {
            comprimento_atual++;
        } else {
            if (comprimento_atual > comprimento_maximo) {
                comprimento_maximo = comprimento_atual;
            }
            comprimento_atual = 1;
        }
        prev_num = num;
    }

    if (comprimento_atual > comprimento_maximo) {
        comprimento_maximo = comprimento_atual;
    }

    printf("%d\n", comprimento_maximo);

    return 0;
}