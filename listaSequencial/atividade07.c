#include<stdio.h>

int main() {
    int num1, num2, prod;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    prod = num1 * num2;

    printf("PROD = %d", prod);
}