#include<stdio.h>

int main()
{
    int num;

    printf ("Digite um numero e descubra seus divisores: ");
    scanf("%d", &num);

    printf("Os divisores de %d sao:\n", num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
