#include<stdio.h>
#include<string.h>

int main()
{
    int vetor[80], i = 0, nBusca, posicao[6], contador = 0;
    char opcao[3];

    do 
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        i++;
        printf("Deseja incluir mais um numero ? Sim ou Nao");
        gets(opcao);
    }while (strcmp(opcao, "Sim") == 0 && i < 80);
    
 
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
