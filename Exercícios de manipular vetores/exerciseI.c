#include <stdio.h>
//retorna o maior elemento do vetor

int maiorValor(int * vet, int size){
    int maior = vet[0];
    for(int i = 1; i < size; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

int main(){
    int vet[10] = {1,2,3,20,3,6,7};
    int size = 7;
    printf("%d\n",maiorValor(vet, size));
}

