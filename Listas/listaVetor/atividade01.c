#include<stdio.h>

int main()
{
    float notas[30];
    int counter = 1;

    for (int i = 0; i < 30; i++)
    {
        printf("Digite a nota do %d aluno: ", counter);
        scanf("%f", &notas[i]);
        printf("Nota: %.2f\n", notas[i]);
        counter++; 
    }
    
    return 0;
}
