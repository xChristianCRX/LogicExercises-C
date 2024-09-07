#include <stdio.h>
//inverte a ordem dos elementos no vetor

int* inverter(int * vet, int size){
    int *vetInvertido = (int *) malloc(size * sizeof(int));
    if (vetInvertido == NULL) {
        printf("Erro ao alocar memória!\n");
        return 0;
    }
    for (int i = 0; i < size; i++) {
        vetInvertido[i] = vet[size - 1 - i];
    }

    return vetInvertido;
}

int main(){
    int vet[10] = {1,2,3,3,3,6,7};
    int size = 7;
    int * vetInvertido = inverter(vet, size);
    for(int i=0; i<size; i++){
        printf("%d ", vetInvertido[i]);
    }

    free(vetInvertido);

    return 0;
}