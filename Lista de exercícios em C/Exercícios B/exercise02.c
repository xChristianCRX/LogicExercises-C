#include <stdio.h>

int main(){
    int l, v;
    float m, a, valorMulta;
    scanf("%d %f %f %d", &l, &m, &a, &v);
    if(v > l){
        valorMulta = (v - l) * a;
        printf("%.2f\n", valorMulta+m);
    }else{
        valorMulta = 0;
        printf("%.2f\n", valorMulta);
    }
}