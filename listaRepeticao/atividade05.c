#include<stdio.h>

int main()
{
    int num, multi = 0;

    printf("Dgite um valor: ");
    scanf("%d", &num);

    for (num; multi < 5; num++)
    {
        if (num % 3 == 0)
        {
            printf("%d\n", num);
            multi++;
        }
        
    }
    
}

