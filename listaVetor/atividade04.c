#include<stdio.h>

int main()
{
    int vetor[80], i, nBusca, posicao[6], contador = 0;

    for (i = 0; i < 80; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
 
    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &nBusca);

    for (i = 0; i < 80; i++)
    {
        if (nBusca == vetor[i])
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
        
    } else
        printf("Nenhum numero igual");
    
    return 0;
}
