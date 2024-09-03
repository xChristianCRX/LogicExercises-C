#include <stdio.h>

int main(){
    int X1, V1, X2, V2;

    scanf("%d", &X1);
    scanf("%d", &V1);
    scanf("%d", &X2);
    scanf("%d",&V2);

    if (V1 != V2) {
        if ((X2 - X1) % (V1 - V2) == 0 && (X2 - X1) / (V1 - V2) >= 0) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } else {
        if (X1 == X2) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}