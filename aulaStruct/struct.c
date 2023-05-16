#include<stdio.h>

//declaração de struct
struct Aluno
{
    char nome[20];
    char telefone[20];
    char cpf[11];
    double todoDinheiroHoje;
    int idade;
};

struct Professor
{
    char nome[20];
    char telefone[20];
    char cpf[11];
    double todoDinheiroHojepMim;
};


int main()
{
    //struct variaveis simples
    struct Aluno aluno1;
    struct Professor professor1;
    aluno1.todoDinheiroHoje = 100000;

    //struct de variaveis de array  
    int vetor[50];
    struct Aluno listaAlunosVetor[4];
    struct Aluno listaAlunosMatrix[2][2];

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno1.nome);
    printf("Digite o cpf do aluno: ");
    fgets(aluno1.cpf, 11, stdin);
    printf("Digite o telefone do aluno: ");
    fgets(aluno1.telefone, 20, stdin);
    printf("Digite o dinheiro do aluno: ");
    scanf("%lf", &aluno1.todoDinheiroHoje);

    //colocar dados no vetor
    for (int i = 0; i < 50; i++)
    {
        printf("Digite o nome do aluno: ");
        fgets(listaAlunosVetor[i].nome, 20, stdin);
        printf("Digite a idade do aluno: ");
        scanf("%d", &listaAlunosVetor[i].idade);
    }
    
    //colocar dados na matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 2; i++)
        {
            printf("Digite o nome do aluno: ");
            fgets(listaAlunosMatrix[i][j].nome);
        }
        
    }
    
    return 0;
}
