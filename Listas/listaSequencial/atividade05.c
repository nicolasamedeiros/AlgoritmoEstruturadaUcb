#include <stdio.h>

int main () {
    int a, b, x;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, x = a + b);
}