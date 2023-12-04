#include<stdio.h>

int main () {
    int num1, num2, num3, num4, diferenca;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);
    printf("Digite o quarto valor: ");
    scanf("%d", &num4);

    diferenca = (num1 * num2) - (num3 * num4);

    printf("DIFERENCA = %d", diferenca);
}