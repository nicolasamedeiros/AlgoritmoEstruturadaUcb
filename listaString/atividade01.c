#include<stdio.h>
#include<string.h>

int main()
{
    char nome[50];
    int quantidade;

    printf ("Digite seu nome: ");
    fgets(nome, 50, stdin);

    quantidade = strlen(nome) - 1;

    printf("Seu texto tem %d caracteres", quantidade);
}
