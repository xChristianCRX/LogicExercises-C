#include <stdio.h>

int append(int * vet, int max, int* size, int element){
    if(*size >= max){
        printf("Vetor cheio\n");
    }else{
        vet[*size] = element;
    }
    (*size)++;
    return 0;
}

int main(){
    int vet[10] = {1,2,3,4,5,6,7};
    int size = 7;
    int max = 10;
    append(vet, max, &size, 11);
    for(int i = 0; i < size; i++){
        printf("%d - ", vet[i]);
    }
    printf("\n");
    for(int i = 0; i < max; i++){
        printf("%d - ", vet[i]);
    }
}