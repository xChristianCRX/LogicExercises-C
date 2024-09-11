#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char cpf[12];
    char nome[120];
    char cargo[50];
    int qtdDependentes;
    float salario;
}T_FUNCIONARIO;

int verSeExiste(T_FUNCIONARIO * vet, int size, char * cpf){
    for( int i=0; i<size; i++){
        if(strcmp(vet[i].cpf, cpf) == 0){
            printf("Funcionario ja cadastrado!\n");
            return 1;
        }
    }
    return 0;
}

int inserirFuncionario(T_FUNCIONARIO * vet, int * size){
    if((*size) >= 500){
        return 0;
    }else{
        char cpf[12];
        printf("Digite o CPF: ");
        scanf("%s", cpf);
        if(verSeExiste(vet, (*size), cpf) == 1){
            return 0;
        }else{
            strcpy(vet[(*size)].cpf, cpf);
        }
        printf("Digite o nome: ");
        scanf("%s", vet[(*size)].nome);
        printf("Digite o cargo: ");
        scanf("%s", vet[(*size)].cargo);
        printf("Digite a quantidade de dependentes: ");
        scanf("%d", &vet[(*size)].qtdDependentes);
        printf("Digite o salario: ");
        scanf("%f", &vet[(*size)].salario);

        (*size)++;
        return 1;
    }
    return 0;
}

int alterarFuncionario(T_FUNCIONARIO * vet, int size){
    char cpf[12];
    printf("Digite o CPF do funcionario a ser alterado: ");
    scanf("%s", cpf);
    for(int i=0; i < size; i++){
        if(strcmp(vet[i].cpf, cpf) == 0){
            printf("Digite o novo nome: ");
            scanf("%s", vet[i].nome);
            printf("Digite o novo cargo: ");
            scanf("%s", vet[i].cargo);
            printf("Digite a quantidade de dependentes: ");
            scanf("%d", &vet[i].qtdDependentes);
            printf("Digite o salario: ");
            scanf("%f", &vet[i].salario);
            return 1;
        }
    }
    return 0;
}

int imprimirTodos(T_FUNCIONARIO * vet, int size){
    if(size == 0){
        printf("Vetor vazio!\n");
        return 0;
    } else{
        for(int i=0; i<size; i++){
            printf("CPF: %s\n", vet[i].cpf);
            printf("Nome: %s\n", vet[i].nome);
            printf("Cargo: %s\n", vet[i].cargo);
            printf("Quantidade de dependentes: %d\n", vet[i].qtdDependentes);
            printf("Salario: %.2f\n", vet[i].salario);
            printf("---------------------------------------\n");
        }
    }
    return 1;
}

int consultarFuncionario(T_FUNCIONARIO * vet, int size){
    char cpf[12];
    printf("Digite o CPF do funcionario desejado: ");
    scanf("%s", cpf);
    for(int i=0; i<size; i++){
        if(strcmp(vet[i].cpf, cpf) == 0){
            printf("Nome: %s\n", vet[i].nome);
            printf("Cargo: %s\n", vet[i].cargo);
            printf("Quantidade de dependentes: %d\n", vet[i].qtdDependentes);
            printf("Salario: %.2f\n", vet[i].salario);
            return 1;
        }
    }
    printf("Funcionario nao encontrado!\n");
    return 0;
}

int excluirFuncionario(T_FUNCIONARIO * vet, int * size){
    char cpf[12];
    printf("Digite o CPF do funcionario a ser excluido: ");
    scanf("%s", cpf);
    for(int i=0; i<(*size); i++){
        if(strcmp(vet[i].cpf, cpf) == 0){
            for(int j=i; j < (*size); j++){
                vet[j] = vet[j+1];
            }
            (*size)--;
            return 1;
        }
    }
    return 0;
}

int main(){
    T_FUNCIONARIO* vetor;
    vetor = (T_FUNCIONARIO*) malloc(sizeof(T_FUNCIONARIO) * 500);
    int size = 0;
    int opc = 1;
    while(opc != 6){
        printf("\nMenu:\n");
        printf("1. Inserir um novo funcionario\n");
        printf("2. Consultar dados de um funcionario\n");
        printf("3. Imprimir todos funcionario\n");
        printf("4. Excluir um funcionario\n");
        printf("5. Alterar um funcionario\n");
        printf("6. Sair\n");
        printf("Digite a opcao: ");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                printf("\n");
                if(inserirFuncionario(vetor, &size) == 1){
                    printf("Funcionario cadastrado com sucesso!\n");
                }else{
                    printf("Erro ao cadastrar funcionario!\n");
                }
                break;
            case 2:
                printf("\n");
                consultarFuncionario(vetor, size);
                break;
            case 3:
                printf("\n");
                imprimirTodos(vetor, size);
                break;
            case 4:
                printf("\n");
                if(excluirFuncionario(vetor, &size) == 1){
                    printf("Funcionario excluido com sucesso!\n");
                }else{
                    printf("Funcionario nao encontrado!\n");
                }
                break;
            case 5:
                printf("\n");
                if(alterarFuncionario(vetor, size) == 1){
                    printf("Funcionario alterado com sucesso!\n");
                }else{
                    printf("Funcionario nao encontrado!\n");
                }
                break;
            case 6:
                printf("\n");
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }
}