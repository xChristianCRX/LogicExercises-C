#include <stdio.h>

int main(){
    int N;
    int isAnaNumber = 0;

    scanf("%d", &N);

    for (int i = 1; i * (i + 1) * (i + 2) <= N; i++) {
        if (i * (i + 1) * (i + 2) == N) {
            isAnaNumber = 1;
            break;
        }
    }

    if (isAnaNumber) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}