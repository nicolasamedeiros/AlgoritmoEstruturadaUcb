#include<stdio.h>

int main()
{
    int num, final;
    char op;
    
    printf("Digite o numero inicial: ");
    scanf("%d", &num);

    printf("Digite ate onde vai: ");
    scanf("%d", &final);

    if (num % 2 == 0)
    {
        for (num; num < final; num+=2)
        {
            printf("%d\n", num);
        }
        
    } else {
        for (num; num < final; num+=2)
        {
            printf("%d\n", num);
        }
    }
    
}
