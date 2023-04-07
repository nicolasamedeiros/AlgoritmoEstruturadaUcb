#include<stdio.h>
#include<string.h>

int main()
{
    char nome[50], meio[50], ultimo[50];

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite seu nome do meio: ");
    scanf("%s", meio);

    printf("Digite seu ultimo nome: ");
    scanf("%s", ultimo);

    strcat(nome, meio);
    strcat(nome, ultimo);

    printf("Seu nome completo e %s", nome);
}
