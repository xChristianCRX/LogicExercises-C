#include <stdio.h>

int main(){
    int ano;
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("-1\n");
    } else if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}