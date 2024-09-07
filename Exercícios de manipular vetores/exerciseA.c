#include <stdio.h>
//retorna verdadeiro se o elemento x for encontrado no vetor e falso caso contrário.

int search(int * vet, int size, int element){
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
    
    if(search(vet, size, 5) != -1){
        printf("Element found\n");
    }else{
        printf("Element not found\n");
    }

}