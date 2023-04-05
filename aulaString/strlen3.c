#include<stdio.h>
#include<string.h>

int main()
{
    char nome[20], sobrenome[20];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    if (strlen(nome) > strlen(sobrenome)) {
        printf("O nome e maior");
    }
    else if (strlen(nome) < strlen(sobrenome)){
        printf("O sobrenome e maior");
    }
    else 
        printf("Os dois tem o mesmo tamanho");
}
