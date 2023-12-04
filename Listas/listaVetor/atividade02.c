#include<stdio.h>

int main()
{
    int alunos, counter = 1;
    float notas[49];

    printf("Digite o numero de alunos(menos que 50): ");
    scanf("%d", &alunos);

    for (int i = 0; i < alunos; i++)
    {
        printf("Digite a nota do %d aluno: ", counter);
        scanf("%f", &notas[i]);
        printf("Nota: %.2f\n", notas[i]);
        counter++;
    }
    return 0;
}
