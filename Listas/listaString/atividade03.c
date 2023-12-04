#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50], email[50], endereco[50];
    char copyNome[50], copyEmail[50], copyEndereco[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite seu email: ");
    fgets(email, 50, stdin);

    printf("Digite seu endereco: ");
    fgets(endereco, 50, stdin);

    printf("\n");

    strcpy(copyNome, nome);
    strcpy(copyEmail, email);
    strcpy(copyEndereco, endereco);

    printf("Os dados digitados foram:\n");
    printf("Nome: %s\n", copyNome);
    printf("E-mail: %s\n", copyEmail);
    printf("Endereco: %s\n", copyEndereco);
}