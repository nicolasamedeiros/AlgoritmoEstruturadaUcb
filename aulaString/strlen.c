#include<stdio.h>
#include<string.h>

int main()
{
    char nome[20];
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Seu nome tem %d letras", strlen(nome));

    
}
