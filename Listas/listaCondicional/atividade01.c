#include<stdio.h>

int main () {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O primeiro numero e maior que o segundo");
    } else {
        printf("O primeiro numero e menor que o segundo");
    }
}