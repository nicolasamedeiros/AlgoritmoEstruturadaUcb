#include<stdio.h>

//será void pois vai passar um endereço de memoria e não vai retornar nada

void preencherusuario(int *codigo, char *nome){
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Digite o id: ");
        scanf("%d", &codigo[i]);
        printf("Digite o nome do cliente: ");
        scanf("%s", &nome[i]);
    }
    
}

int main()
{
    int codigo[4], i;
    char nome[50][4];  

    preencherusuario(*codigo, *nome);
    
    for ( i = 0; i < 4; i++)
    {
        printf("%d - %s", codigo[i], nome[i]);
    }
    
}
