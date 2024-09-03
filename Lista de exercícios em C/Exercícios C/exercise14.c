#include <stdio.h>

int main(){
    int N, C, M;
    int chocolates, embalagens;

    scanf("%d", &N);
    scanf("%d", &C);
    scanf("%d", &M);

    chocolates = N / C;
    embalagens = chocolates;

    while (embalagens >= M) {
        int chocolatesGratis = embalagens / M;
        chocolates += chocolatesGratis;
        embalagens = embalagens % M + chocolatesGratis;
    }

    printf("%d", chocolates);

    return 0; 
}