#include <stdio.h>

int adicionaPessoas(int qtdPessoas, int *pessoasDentro){
    for(int i = 0; i < qtdPessoas; i++){
        pessoasDentro[i] = i + 1;
    }
    return 0;
}

int removeDaLista(int *lista, int livre, int remover){
    int index = 0;
    if(livre != 0){
        for(int i = 0; i < livre; i++){
            if(lista[i] == remover){
                index = i;
            }
        }
        for(int i = index+1; i<livre; i++){
            lista[i-1] = lista[i];
        }
        return 0;
    }
    return 0;
}

int procuraNaLista(int *lista, int livre, int procurado){
    int achou = 0;
    for(int i = 0; i < livre; i++){
        if(lista[i] == procurado){
            achou = 1;
            break;
        }
    }
    return achou;
}

int tiraPessoas(int *pessoasDentro, int *pessoasFora, int livreDentro, int livreFora){
    for(int i = 1;i < livreDentro; i+=2){
        pessoasFora[livreFora++] = pessoasDentro[i];
    }

    while(livreDentro != 1){
        if(pessoasFora[livreFora-1] == pessoasDentro[livreDentro-1]){
            for(int i = 0; i < livreFora; i++){
                if(procuraNaLista(pessoasDentro, livreDentro, pessoasFora[i]) == 1){
                    removeDaLista(pessoasDentro, livreDentro, pessoasFora[i]);
                    livreDentro--;
                }
            }
            for(int i = 1; i < livreDentro; i+=2){
                pessoasFora[livreFora++] = pessoasDentro[i];
            }
        }else{
            for(int i = 0; i < livreFora; i++){
                if(procuraNaLista(pessoasDentro, livreDentro, pessoasFora[i]) == 1){
                    removeDaLista(pessoasDentro, livreDentro, pessoasFora[i]);
                    livreDentro--;
                }
            }
            for(int i = 0; i < livreDentro; i+=2){
                pessoasFora[livreFora++] = pessoasDentro[i];
            }
        }
    }
    return 0;
}

int achaFora(int *pessoasDentro, int *pessoasFora){
    int n;
    scanf("%d",&n);
    printf("Eliminacao %d: %d\n", n, pessoasFora[n-1]);
    printf("Ganhadora: %d", pessoasDentro[0]);
    return 0;
}

int main(){
    int qtdPessoas;
    scanf("%d",&qtdPessoas);

    int pessoasDentro[qtdPessoas];
    int livreDentro = qtdPessoas;

    int pessoasFora[qtdPessoas];
    int livreFora = 0;

    adicionaPessoas(qtdPessoas, pessoasDentro);
    tiraPessoas(pessoasDentro, pessoasFora, livreDentro, livreFora);
    achaFora(pessoasDentro, pessoasFora);
}