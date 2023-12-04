#include<stdio.h>

int main()
{
    char letras[30];
    int counter = 1;

    for (int i = 0; i < 30; i++)
    {
        printf("Digite a %d letra: ", counter);
        scanf(" %c", &letras[i]);
        counter++;
    }

    printf("Letras na ordem inversa: ");
    for (int i = 29; i >= 0; i--)
    {
        printf("%c", letras[i]);
    }
    
    return 0;
}
