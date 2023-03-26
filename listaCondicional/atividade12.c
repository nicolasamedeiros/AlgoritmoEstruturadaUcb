#include<stdio.h>

int main() {
    float valX, valY;

    printf("Digite o valor de X: ");
    scanf("%.1f", &valX);
    printf("Digite o valor de Y: ");
    scanf("%.1f", &valY);

    if (valX > 0 && valY > 0) {
        printf("Quadrante 1");
        return 0;
    }
    else if (valX < 0 && valY > 0) {
        printf("Quadrante 2");
        return 0;
    }
    else if (valX < 0 && valY < 0) {
        printf("Quadrante 3");
        return 0;
    }
    else if (valX > 0 && valY < 0) {
        printf("Quadrante 4");
        return 0;
    }
    else {
        printf("Origem");
        return 0;
    }
}