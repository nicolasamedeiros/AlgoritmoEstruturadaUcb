#include <stdio.h>
#include <stdlib.h>

int main () {
    int inteiro;
    int * ptr;
    float decimal;
    double decimal2;
    char letra, palavra[80];

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);

    ptr = &inteiro;

    printf("Digite um numero decimal: ");
    scanf("%f", &decimal);
    fflush(stdin);
    printf("Digite um double: ");
    scanf("%lf", &decimal2);
    fflush(stdin);
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    fflush(stdin);
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    fflush(stdin);


    printf("Inteiro: %d\n", inteiro);
    printf("Decimal: %.3f\n", decimal);
    printf("Double: %lf\n", decimal2);
    printf("Letra: %c\n", letra);
    printf("Palavra: %s\n", palavra);
    printf("Endereco: %x\n", ptr);
}