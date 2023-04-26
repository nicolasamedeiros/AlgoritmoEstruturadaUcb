#include<stdio.h>

int main()
{
    int n1[10], n2[10], soma[10], counter = 1;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite o %d numero 1: ", counter);
        scanf("%d", &n1[i]);
        printf("Digite o %d numero 2: ", counter);
        scanf("%d", &n2[i]);
        soma[i] = n1[i] + n2[i];
       // printf("%d\n", soma[i]);
        counter++;
    }
        
    for (int i = 0; i < 4; i++) {

        if (soma[i] % 2 == 0) {
            printf("%d + %d = %d - PAR\n", n1[i], n2[i], soma[i]);
        }
        else {
           printf("%d + %d = %d - IMPAR\n", n1[i], n2[i], soma[i]);
        }
    }
        
    return 0;
}
