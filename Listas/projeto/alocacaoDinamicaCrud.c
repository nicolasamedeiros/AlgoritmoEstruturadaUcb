#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char nome[100];
    char email[100];
    char sexo[10];
    char endereco[200];
    float altura;
    int vacina;
} Usuario;

Usuario* criarUsuario() {
    Usuario* usuario = (Usuario*)malloc(sizeof(Usuario));
    
    printf("Nome completo: ");
    fgets(usuario->nome, 100, stdin);
    usuario->nome[strcspn(usuario->nome, "\n")] = '\0';
    
    printf("Email: ");
    fgets(usuario->email, 100, stdin);
    usuario->email[strcspn(usuario->email, "\n")] = '\0';
    
    printf("Sexo: ");
    fgets(usuario->sexo, 10, stdin);
    usuario->sexo[strcspn(usuario->sexo, "\n")] = '\0';
    
    printf("Endereco: ");
    fgets(usuario->endereco, 200, stdin);
    usuario->endereco[strcspn(usuario->endereco, "\n")] = '\0';
    
    printf("Altura: ");
    scanf("%f", &usuario->altura);
    
    printf("Tomou vacina? (1-Sim, 2-Não): ");
    scanf("%d", &usuario->vacina);
    
    getchar(); // Limpar o buffer do teclado
    
    return usuario;
}

void editarUsuario(Usuario* usuario) {
    printf("Editar informações do usuário:\n");
    printf("Nome completo (atual: %s): ", usuario->nome);
    fgets(usuario->nome, 100, stdin);
    usuario->nome[strcspn(usuario->nome, "\n")] = '\0';
    
    printf("Email (atual: %s): ", usuario->email);
    fgets(usuario->email, 100, stdin);
    usuario->email[strcspn(usuario->email, "\n")] = '\0';
    
    printf("Sexo (atual: %s): ", usuario->sexo);
    fgets(usuario->sexo, 10, stdin);
    usuario->sexo[strcspn(usuario->sexo, "\n")] = '\0';
    
    printf("Endereco (atual: %s): ", usuario->endereco);
    fgets(usuario->endereco, 200, stdin);
    usuario->endereco[strcspn(usuario->endereco, "\n")] = '\0';
    
    printf("Altura (atual: %.2f): ", usuario->altura);
    scanf("%f", &usuario->altura);
    
    printf("Tomou vacina? (1-Sim, 2-Não) (atual: %d): ", usuario->vacina);
    scanf("%d", &usuario->vacina);
    
    getchar(); // Limpar o buffer do teclado
}

void excluirUsuario(Usuario** listaUsuarios, int* numUsuarios) {
    int i;
    char email[100];
    
    printf("Digite o email do usuário a ser excluído: ");
    fgets(email, 100, stdin);
    email[strcspn(email, "\n")] = '\0';
    
    for (i = 0; i < *numUsuarios; i++) {
        if (strcmp(listaUsuarios[i]->email, email) == 0) {
            free(listaUsuarios[i]);
            listaUsuarios[i] = listaUsuarios[*numUsuarios - 1];
            (*numUsuarios)--;
            printf("Usuário excluído com sucesso!\n");
            return;
        }
    }
    
    printf("Usuário não encontrado.\n");
}

void buscarPorEmail(Usuario** listaUsuarios, int numUsuarios) {
    int i;
    char email[100];
    
    printf("Digite o email do usuário a ser buscado: ");
    fgets(email, 100, stdin);
    email[strcspn(email, "\n")] = '\0';
    
    for (i = 0; i < numUsuarios; i++) {
        if (strcmp(listaUsuarios[i]->email, email) == 0) {
            printf("Usuário encontrado:\n");
            printf("Nome: %s\n", listaUsuarios[i]->nome);
            printf("Email: %s\n", listaUsuarios[i]->email);
            printf("Sexo: %s\n", listaUsuarios[i]->sexo);
            printf("Endereco: %s\n", listaUsuarios[i]->endereco);
            printf("Altura: %.2f\n", listaUsuarios[i]->altura);
            printf("Tomou vacina? %s\n", listaUsuarios[i]->vacina == 1 ? "Sim" : "Não");
            return;
        }
    }
    
    printf("Usuário não encontrado.\n");
}

void listarUsuarios(Usuario** listaUsuarios, int numUsuarios) {
    int i;
    
    printf("Lista de usuários:\n");
    
    for (i = 0; i < numUsuarios; i++) {
        printf("Usuário %d:\n", i + 1);
        printf("Nome: %s\n", listaUsuarios[i]->nome);
        printf("Email: %s\n", listaUsuarios[i]->email);
        printf("Sexo: %s\n", listaUsuarios[i]->sexo);
        printf("Endereco: %s\n", listaUsuarios[i]->endereco);
        printf("Altura: %.2f\n", listaUsuarios[i]->altura);
        printf("Tomou vacina? %s\n", listaUsuarios[i]->vacina == 1 ? "Sim" : "Não");
    }
}

void fazerBackup(Usuario** listaUsuarios, int numUsuarios) {
    FILE* arquivo = fopen("backup.txt", "w");
    int i;
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de backup.\n");
        return;
    }
    
    for (i = 0; i < numUsuarios; i++) {
        fprintf(arquivo, "%s;%s;%s;%s;%.2f;%d\n", listaUsuarios[i]->nome, listaUsuarios[i]->email,
                listaUsuarios[i]->sexo, listaUsuarios[i]->endereco, listaUsuarios[i]->altura, listaUsuarios[i]->vacina);
    }
    
    fclose(arquivo);
    printf("Backup realizado com sucesso!\n");
}

void restaurarDados(Usuario*** listaUsuarios, int* numUsuarios) {
    FILE* arquivo = fopen("backup.txt", "r");
    char linha[500];
    char* token;
    
    if (arquivo == NULL) {
        printf("Arquivo de backup não encontrado.\n");
        return;
    }
    
    // Limpar a lista de usuários atual
    int i;
    for (i = 0; i < *numUsuarios; i++) {
        free((*listaUsuarios)[i]);
    }
    
    *numUsuarios = 0;
    
    // Ler as linhas do arquivo de backup
    while (fgets(linha, 500, arquivo) != NULL) {
        Usuario* usuario = (Usuario*)malloc(sizeof(Usuario));
        
        token = strtok(linha, ";");
        strcpy(usuario->nome, token);
        
        token = strtok(NULL, ";");
        strcpy(usuario->email, token);
        
        token = strtok(NULL, ";");
        strcpy(usuario->sexo, token);
        
        token = strtok(NULL, ";");
        strcpy(usuario->endereco, token);
        
        token = strtok(NULL, ";");
        usuario->altura = atof(token);
        
        token = strtok(NULL, ";");
        usuario->vacina = atoi(token);
        
        (*listaUsuarios)[(*numUsuarios)++] = usuario;
    }
    
    fclose(arquivo);
    printf("Dados restaurados com sucesso!\n");
}

int main() {
    Usuario** listaUsuarios = NULL;
    int numUsuarios = 0;
    int opcao;
    
    do {
        printf("\nSelecione uma opção:\n");
        printf("1 - Incluir usuário\n");
        printf("2 - Editar usuário\n");
        printf("3 - Excluir usuário\n");
        printf("4 - Buscar usuário por email\n");
        printf("5 - Listar todos os usuários\n");
        printf("6 - Fazer backup dos usuários\n");
        printf("7 - Restaurar dados\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer do teclado
        
        switch (opcao) {
            case 1:
                listaUsuarios = (Usuario**)realloc(listaUsuarios, (numUsuarios + 1) * sizeof(Usuario*));
                listaUsuarios[numUsuarios++] = criarUsuario();
                printf("Usuário incluído com sucesso!\n");
                break;
            case 2:
                if (numUsuarios > 0) {
                    listarUsuarios(listaUsuarios, numUsuarios);
                    editarUsuario(listaUsuarios[numUsuarios - 1]);
                    printf("Usuário editado com sucesso!\n");
                } else {
                    printf("Nenhum usuário cadastrado.\n");
                }
                break;
            case 3:
                if (numUsuarios > 0) {
                    excluirUsuario(listaUsuarios, &numUsuarios);
                } else {
                    printf("Nenhum usuário cadastrado.\n");
                }
                break;
            case 4:
                if (numUsuarios > 0) {
                    buscarPorEmail(listaUsuarios, numUsuarios);
                } else {
                    printf("Nenhum usuário cadastrado.\n");
                }
                break;
            case 5:
                if (numUsuarios > 0) {
                    listarUsuarios(listaUsuarios, numUsuarios);
                } else {
                    printf("Nenhum usuário cadastrado.\n");
                }
                break;
            case 6:
                if (numUsuarios > 0) {
                    fazerBackup(listaUsuarios, numUsuarios);
                } else {
                    printf("Nenhum usuário cadastrado.\n");
                }
                break;
            case 7:
                restaurarDados(&listaUsuarios, &numUsuarios);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);
    
    // Liberar a memória alocada
    int i;
    for (i = 0; i < numUsuarios; i++) {
        free(listaUsuarios[i]);
    }
    free(listaUsuarios);
    
    return 0;
}
