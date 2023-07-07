#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 50

struct tipoPessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipoPessoa Pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //inicializando variavel
    Pessoa pes = {0, 0.0, "Teste"};

    printf("Inicio: \n");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.2f\n", pes.peso);
    printf("Nome: %s\n", pes.nome);

    //atribuindo valores
    pes.idade = 20;
    pes.peso = 80.5;
    strcpy(pes.nome, "João");

    printf("Alterando valores\n");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.2f\n", pes.peso);
    printf("Nome: %s\n", pes.nome);

    //Solicitando pelo usuário
    printf("Digite a idade: ");
    scanf("%d", &pes.idade);
    printf("Digite o peso: ");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Digite o nome: ");
    scanf("%s", &pes.nome);

    printf("Dados digitados pelo usuario\n");
    printf("idade: %d\n", pes.idade);
    printf("peso: %.2f\n", pes.peso);
    printf("nome: %s\n", pes.nome);
}
