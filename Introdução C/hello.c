#include <stdio.h>

int somar(int x, int y){
    return x+y;
}

int main(){
    //Print
    printf("Hello, world!");

    //Variáveis
    int idade = 19;
    float altura = 1.72f;
    double peso = 80.2;
    char opcao = 'x';

    //Print
    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);
    printf("peso: %f\n", peso);
    printf("opcao: %c\n", opcao);

    printf("Altura: %.2f. Peso: %.4f\n", altura,peso);

    //Operações
    int a = 10, b = 4;
    int soma;
    float divisao;

    soma = a + b;
    divisao = a / b;

    printf("Soma: %d\n", soma);
    printf("Divisao: %f\n", divisao);

    //Leitura
    int x;
    float y;
    char c;
    char nome[5];

    printf("Informe um inteiro: ");
    scanf("%d", &x);
    
    printf("Informe um float: ");
    scanf("%f", &y);

    printf("Informe um char: ");
    scanf(" %c", &c);
    
    printf("Informe um nome: ");
    scanf(" %s", nome);

    printf("Inteiro: %d\nFloat: %f\nChar: %c\n", x, y, c);
    
    //Funções
    int res;
    int s;

    res = somar(3,7);
    res = res + 1;

    return 1;
}