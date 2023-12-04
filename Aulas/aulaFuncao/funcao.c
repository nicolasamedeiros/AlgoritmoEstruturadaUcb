#include<stdio.h>
#include<stdlib.h>

float maior (float num1, float num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main()
{
    float x, y, z;
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);
    z = maior(x, y);
    printf("O maior numero e: %f", z);
    return 0;
}
