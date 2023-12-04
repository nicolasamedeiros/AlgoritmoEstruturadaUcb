#include <stdio.h>

int main() {
    int num, i;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    printf("Os proximos 5 numeros impares sao: ");
    i = num + (num % 2) + 1;
    for (int j = 0; j < 5; j++)
    {
        printf("%d\n", i);
        i+=2;
    }
    return 0;
}
