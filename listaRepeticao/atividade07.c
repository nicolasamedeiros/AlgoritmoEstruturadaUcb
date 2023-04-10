#include<stdio.h>

int main()
{
    int num;
    int sum = 0; 
    int reps = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        sum += num;
        reps++;
    } while (reps < 10);
    printf("A soma de todos os valores eh: %d", sum);

    return 0;
}
