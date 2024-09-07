#include <stdio.h>
//retorna a soma dos elementos do vetor

int somaVetor(int * vet, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += vet[i];
    }
    return soma;
}

int main(){
    int vet[10] = {1,2,3,3,3,6,7};
    int size = 7;
    printf("%d\n",somaVetor(vet, size));
}