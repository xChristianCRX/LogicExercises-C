#include <stdio.h>
//atualiza o valor da posicao i no vetor

int atualizar(int * vet, int size, int new, int posicao){
    for(int i=0; i<size; i++){
        if(i == posicao){
            vet[i] = new;
            return 1;
        }
    }
    return 0;
}

int main(){
    int vet[10] = {1,2,3,3,3,6,7};
    int size = 7;
    atualizar(vet, size, 20, 3);
    for(int i=0; i<size; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}