#include<stdio.h>

int main()
{
    int numero, a = 0, b = 1, c, i;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if(numero == 0) {
        printf("%d", a);
    }
    else if (numero == 1) {
        printf("%d", b);
    }
    else {
        for (int i = 0; i <= numero; i++)
        {
            c = a + b;
            a = b; 
            b = c;
        }
        printf("%d", c);
    }
}
