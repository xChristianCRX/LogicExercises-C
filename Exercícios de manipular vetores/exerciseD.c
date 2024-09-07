#include <stdio.h>
// insere um determinado elemento na posição i do vetor

int insert(int * vet, int * size, int max, int element, int posicao){
    if(*size >= max){
        printf("Vetor cheio.\n");
        return 0; 
    }else{
        (*size)++;
        for(int i = *size; i >= posicao; i--){
            if(i != posicao){
                vet[i] = vet[i-1];
            }else{
                printf("achei %d\n", i);
                vet[i] = element;
            }
        }
    }
    return 0;
}

int main(){
    int vet[10] = {1,2,3,4,5,6,7};
    int size = 7;
    int max = 10;
    insert(vet, &size, max, 20, 3);
    for(int i = 0; i < size; i++){
        printf("%d - ", vet[i]);
    }
}