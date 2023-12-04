#include<stdio.h>
#include<string.h>

int main()
{
    char nome[20], ultimoNome[20], cpf[14], senha[54];

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite seu ultimo nome: ");
    scanf("%s", ultimoNome);

    printf("Digite seu cpf: ");
    scanf("%s", cpf);

    strcpy(senha, nome);
    strncat(senha, ultimoNome, 1);
    strncat(senha, cpf, 3);

    printf("Sua senha gerada foi: %s", senha);
}