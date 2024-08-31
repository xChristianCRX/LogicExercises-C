#include <stdio.h>

int main(){
    int A, B, C, temp;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (A > C) {
        temp = A;
        A = C;
        C = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);

    return 0;
}