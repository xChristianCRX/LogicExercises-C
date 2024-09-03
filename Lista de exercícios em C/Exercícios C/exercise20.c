#include <stdio.h>

int main(){
    int idade;
    int soma_idades = 0;
    int quantidade_pessoas = 0;
    int maiores_idade = 0;
    int idosos = 0;

    while (idade >= 0) {
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }
        soma_idades += idade;
        quantidade_pessoas++;
        if (idade >= 18) {
            maiores_idade++;
        }
        if (idade > 75) {
            idosos++;
        }
    }

    double media_idades = (double)soma_idades / quantidade_pessoas;
    double porcentagem_idosos = (double)idosos / quantidade_pessoas * 100;

    printf("%.2f\n", media_idades);
    printf("%d\n", maiores_idade);
    printf("%.2f%%\n", porcentagem_idosos);

    return 0;
}