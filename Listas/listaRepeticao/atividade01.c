#include<stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
    
}