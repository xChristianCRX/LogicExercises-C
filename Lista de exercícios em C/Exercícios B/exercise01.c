#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("O maior numero eh %d\n", a);    
    }else{
        printf("O maior numero eh %d\n", b);
    }
}