#include<stdio.h>

int main()
{
    int sum = 0;

    for (int num = 2; num <= 50; num+=2)
    {
        sum += num;
    }
    printf("A soma de todos os numeros pares ate 50 e: %d", sum);
}
