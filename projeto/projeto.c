#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void preencherdados(int *vacina, char nome[][50], char email[][25], char sexo[][13], char endereco[][30], double *altura){
    
    for (int i = 0; i < 2; i++){
        printf("Digite o nome do usuario: ");
        fgets(nome[i], 50, stdin);
        fflush(stdin);
        do
        {
            printf("Digite a altura em metros: ");
            scanf("%lf", &altura[i]);   
            fflush(stdin);
        } while (altura[i] < 1 || altura[i] > 2);
        do
        {
            printf("Digite o email do usuario: ");
            fgets(email[i], 25, stdin);
            fflush(stdin);
        } while (strchr(email[i], '@') == 0);
        
        do
        {
            printf("Digite o sexo do usuario: ");
            fgets(sexo[i], 13, stdin);
            fflush(stdin);
        } while (strcmp(sexo[i], "masculino") == 0 && strcmp(sexo[i], "feminino") == 0 && strcmp(sexo[i], "indiferente") == 0);
        
        printf("Digite o endereco do usuario: ");
        fgets(endereco[i], 30, stdin);
        printf("Usuario tomou vacina ? 1 - sim / 2 - nao: ");
        scanf("%d", &vacina[0]);
        getchar();
    }
}

int main()
{
    int vacina, i;
    char opcao, nome[3][50], email[3][25], sexo[3][13], enderenco[3][30];
    double altura[3];

    printf("Digite a opcao que deseja fazer: ");
    scanf("%c", &opcao);
    fflush(stdin);

    switch (opcao){
    case 'a': 
        preencherdados(&vacina, nome, email, sexo, enderenco, altura);
        break;

    case 'b':

    
    case 'e':
        for ( i = 0; i < 2; i++){
            printf("Usuarios cadstrados\n");
            printf(" Nome: %s Email: %s Sexo: %s Endereco: %s altura: %.2lf\n vacina: %d", nome[i], email[i], sexo[i], enderenco[i], altura[i], vacina);
        }
        break;
    default:
        break;
    }
    
    return 0;
}
