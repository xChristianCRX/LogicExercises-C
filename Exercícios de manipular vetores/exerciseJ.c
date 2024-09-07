#include <stdio.h>
//retorna o maior elemento do vetor

int ocorrencias(int * vet, int size, int elemento){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(vet[i] == elemento){
            count++;
        }
    }
    return count;
}



int main(){
    int vet[10] = {1,2,3,20,3,6,7};
    int size = 7;

    printf("%d\n",ocorrencias(vet, size, 3));
}