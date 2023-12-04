#include<stdio.h>

int main() {
    float sal, prestacao;

    printf("Digite seu salario: ");
    scanf("%f", &sal);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);

    if (prestacao > sal*0.20) {
        printf("Emprestimo nao concedido");
    } else {
        printf ("Emprestimo concedido");
    }
}