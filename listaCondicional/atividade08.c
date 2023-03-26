#include<stdio.h>
#include<string.h>

int main() {
    float valProduto, valFinal;
    char estado[2];

    printf("Digite o valor do produto: ");
    scanf("%f", &valProduto);
    printf("Digite seu estado: ");
    scanf("%s", estado);

    if (strcmp(estado, "MG") == 0) {
        valFinal = valProduto + (valProduto*0.07);
        printf("O valor final do produto e: R$%.2f", valFinal);
        return 0;
    } 
    else if (strcmp(estado, "SP") == 0) {
        valFinal = valProduto + (valProduto*0.12);
        printf("O valor final do produto e: R$%.2f", valFinal);
        return 0;
    }
    else if (strcmp(estado, "RJ") == 0) {
        valFinal = valProduto + (valProduto*0.15);
        printf("O valor final do produto e: R$%.2f", valFinal);
        return 0;
    }
    else if (strcmp(estado, "MS") == 0) {
        valFinal = valProduto + (valProduto*0.08);
        printf("O valor final do produto e: R$%.2f", valFinal);
        return 0;
    }
    else {
        printf("Estado nao encontrado no banco de dados");
        return 0;
    }
}