#include <stdio.h>

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
    printf("%d\n",findFirstOccurence(vet, size, 3));

}