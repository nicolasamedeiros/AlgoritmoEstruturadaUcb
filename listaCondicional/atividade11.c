#include<stdio.h>

int main() {
    int num1, num2, num3, op, cal;

    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Operacoes\n");
    printf("1 - Geométrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    printf("Digite qual operacao quer fazer: ");
    scanf("%d", &op);

    if (op == 1) {
        cal = num1 * num2 * num3;
        printf("Resultado: %d", cal);
    }
    else if (op == 2) {
        cal = (num1+2) * (num2+3) * num3;
        printf("Resultado: %d", cal);
    }
    else if (op == 3) {
        
    }
    else if (op == 4) {
        cal = (num1 + num2 + num3) / 3;
        printf("Resultado: %d", cal);
    }
}