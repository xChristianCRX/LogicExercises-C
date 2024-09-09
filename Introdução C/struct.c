#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char titulo[120];
    char genero[32];
    int anoLancamento;
}T_FILME;

int imprimeFilme(T_FILME filme){
    printf("Titulo: %s\n", filme.titulo);
    printf("Genero: %s\n", filme.genero);
    printf("Ano de Lancamento: %d\n", filme.anoLancamento);

    return 0;
}

int atualizaAno(T_FILME * filme){
    (*filme).anoLancamento = 2021;
    //OU
    filme->anoLancamento = 2021;
    return 0;
}

T_FILME* criarFilme(char* titulo, char* genero, int ano){
    T_FILME* filme;

    filme = (T_FILME *) malloc(sizeof(T_FILME));
    strcpy(filme->titulo, titulo);
    strcpy(filme->genero, genero);
    filme->anoLancamento = ano;
    return filme;
}

int main(){
    T_FILME* filme1;

    filme1 = criarFilme("Matrix", "Ficcao Cientifica", 1999);

    imprimeFilme(*filme1);
    atualizaAno(filme1);
    imprimeFilme(*filme1);

    T_FILME* filmes;
    filmes = (T_FILME *) malloc(10 * sizeof(T_FILME));

    free(filme1);
}