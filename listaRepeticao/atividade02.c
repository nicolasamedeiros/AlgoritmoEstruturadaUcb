#include<stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 0; num >= i; num--)
    {
        printf("%d\n", num);
    }
    
}