#include <stdio.h>

int main() {
    char nome[20];
    float n1, n2;
    printf("Digite o nome do aluno(a): ");
    scanf("%s", nome);
    printf("Digite as duas notas do Aluno: ");
    scanf("%f%f", &n1, &n2);
    float media =  (n1 + n2) / 2;
    printf("%s obteve %.2f de média", nome, media);
}