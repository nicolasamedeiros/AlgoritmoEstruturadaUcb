#include<stdio.h>
#include<string.h>

int main()
{
    char nome[20], sobrenome[20];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Seu nome tem %d letras", strlen(nome) + strlen(sobrenome));
}
