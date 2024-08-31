#include <stdio.h>

int main(){
    int N;
    float H = 0.0;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        H += 1.0 / i;
    }

    printf("%.4f\n", H);

    return 0;
}