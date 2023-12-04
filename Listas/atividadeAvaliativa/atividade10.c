#include <stdio.h>

int main()
{
    int sum = 0, num;
    
    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        sum += num;
    }

    printf("A media de todos os 10 numeros digitados eh: %d", sum/10);
    return 0;
}
