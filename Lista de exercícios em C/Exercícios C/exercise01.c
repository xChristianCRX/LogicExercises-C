#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}