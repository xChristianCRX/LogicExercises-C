#include <stdio.h>
//remove a primeira ocorrência de um elemento x no vetor

int remover(int * vet, int * size, int elemento){
    for(int i=0; i<(*size); i++){
        if(vet[i] == elemento){
            for(int j=i; j<(*size); j++){
                vet[j] = vet[j+1];
            }
            (*size)--;
            break;
        }
    }
    return 0;
}

int main(){
    int vet[10] = {1,2,3,3,3,6,7};
    int size = 7;
    remover(vet, &size, 3);
    for(int i=0; i<size; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}