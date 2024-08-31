#include <stdio.h>

int main(){
    int a, b, temp;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}