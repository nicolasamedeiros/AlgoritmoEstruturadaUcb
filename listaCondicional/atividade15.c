#include<stdio.h>

int main() {
    int  ddd;

    printf("Digite um ddd: ");
    scanf("%d", &ddd);

    switch (ddd)
    {
    case 61:
        printf("Brasília");
        break;
    case 71:
        printf("Salvador");    
        break;
    case 11:
        printf("Sao paulo");
        break;
    case 21:
        printf("Rio de Janeiro");
        break;
    case 32:
        printf("Juiz de Fora");
        break;
    case 19:
        printf("Campinas");
        break;
    case 27:
        printf("Vitoria");
        break;
    case 31:
        printf("Belo Horizonte");
        break;
    default:
        printf("Uma cidade no Brasil sem identificacao");
        break;
    }   
}