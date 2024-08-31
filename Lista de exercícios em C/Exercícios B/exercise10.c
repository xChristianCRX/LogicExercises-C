#include <stdio.h>

int main(){
    int A, B, C;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if (A + B <= C || A + C <= B || B + C <= A) {
        printf("INVALIDO");
    } else if (A == B && B == C) {
        printf("EQUILATERO");
    } else if (A == B || A == C || B == C) {
        printf("ISOSCELES");
    } else {
        printf("ESCALENO");
    }

    return 0;
}