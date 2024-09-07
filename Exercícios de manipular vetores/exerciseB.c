#include <stdio.h>
//retorna o primeiro indice do elemento x no vetor. Se não encontra, retorna -1

int indexOf(int * vet, int size, int element){
    for(int i = 0; i < size; i++){
        if(vet[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    int vet[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    if(indexOf(vet, size, 3) != -1){
        printf("%d\n",indexOf(vet, size, 3));
    }else{
        printf("Element not found!\n");
    }
}