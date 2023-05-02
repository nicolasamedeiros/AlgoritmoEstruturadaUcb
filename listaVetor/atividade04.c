#include<stdio.h>

int main()
{
    int numeros[6], i, nBusca, posicao[6], contador = 0;

    for ( i = 0; i < 6; i++)
    {
        numeros[i] = i * 5;
    }

    
    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &nBusca);

    for (i = 0; i < 6; i++)
    {
        if (nBusca == numeros[i])
        {
            posicao[contador] = i;
            contador++;
        }
        
    }

    if (contador > 0)
    {
        printf("Existem %d numeros iguais!\n", contador);
        printf("Nas casas: ");

        for (i = 0; i < contador; i++)
        {
            printf("%d", posicao[i]);
        }
        
    }
    
    return 0;
}
