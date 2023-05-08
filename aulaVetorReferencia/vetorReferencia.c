//será void pois vai passar um endereço de memoria e não vai retornar nada

#include <stdio.h>

void preencherdados(int *codigo, char nome[][50]){
    for (int i = 0; i < 4; i++){
        printf("Digite o ID: ");
        scanf("%d", &codigo[i]);
        printf("Digite o nome do usuario: ");
        scanf("%s", nome[i]);
    }
}

int main()
{
    int codigo[4];
    char nome[4][50];

    preencherdados(codigo, nome);

    for (int i = 0; i < 4; i++)
    {
        printf("%d - %s\n", codigo[i], nome[i]);
    }

    return 0;
}
