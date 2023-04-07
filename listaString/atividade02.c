#include <stdio.h>
#include <string.h>

int main()
{
    char cor[8];

    printf("Digite o nome de uma cor: ");
    scanf("%s", cor);

    if (strcmp(cor, "verde") == 0)
    {
        printf("Cor validada");
        return 0;
    }
    else if (strcmp(cor, "branco") == 0)
    {
        printf("Cor validada");
        return 0;
    }
    else if (strcmp(cor, "amarelo") == 0) {
        printf("Cor validada");
        return 0;
    }
    else
        printf("Cor nao validada");
}
