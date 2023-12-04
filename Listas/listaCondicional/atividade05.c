#include<stdio.h>
#include<math.h>

int main() {
    int num, quadrado, raiz;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0) {
        quadrado = pow(num, 2);
        raiz = sqrt(num);
        printf("Quadrado: %d\n", quadrado);
        printf("Raiz: %d", raiz);
    } else {
        printf("Não posso calcular");
    }
}