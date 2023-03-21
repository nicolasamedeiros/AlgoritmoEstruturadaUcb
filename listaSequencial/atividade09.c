#include<stdio.h>

int main () {
    char nome[50];
    float salario, vendas, result;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite o total de vendas R$ ");
    scanf("%f", &vendas);

    result = (vendas * 0.15) + salario;

    printf("%s seu salario esse mes eh R$ %.2f", nome, result);
}