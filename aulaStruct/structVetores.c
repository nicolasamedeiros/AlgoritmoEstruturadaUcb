#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAM 3

struct tipoPessoa
{
    char nome[50];
    int idade;
    float peso;
};

typedef struct  tipoPessoa Pessoa;


int main()
{
    setlocale(LC_ALL, "Portuguese");

    Pessoa lista[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Insira os dados da pessoa %d\n", i+1);
        printf("Nome: \n");
        fgets(lista[i].nome, 50, stdin);
        fflush(stdin);
        printf("Idade: \n");
        scanf("%d", &lista[i].idade);
        fflush(stdin);
        printf("Peso: \n");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }
    system("cls");

    for (int i = 0; i < TAM; i++)
    {
        printf("Dados da pessoa %d\n", i+1);
        printf("nome: %s", lista[i].nome);
        printf("idade: %d\n", lista[i].idade);
        printf("peso: %.2f\n", lista[i].peso);
    }
    return 0;
}
