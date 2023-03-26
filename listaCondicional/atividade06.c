#include<stdio.h>

int main() {
    char sexo;
    float altura, resultM, resultF;

    printf("Qual seu sexo M ou F: ");
    scanf("%c", &sexo);
    
    printf("Qual sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        resultM = (72.7 * altura) - 58;
        printf("O peso ideal masculino e %.2f", resultM);
    } else if (sexo == 'F' || sexo == 'f') {
        resultF = (62.1 * altura) - 44.7;
        printf("O peso ideal feminino e %.2f", resultF);
    } else {
        printf("Sexo nao valido");
    }
}