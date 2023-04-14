#include<stdio.h>

int main()
{
    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0){
        printf("Quadrado 1");
        return 0;
    }
    else if (x < 0 && y > 0) {
        printf("Quadrado 2");
        return 0;
    }
    else if (x < 0 && y < 0) {
        printf("Quadrado 3");
        return 0;
    }
    else if (x > 0 && y < 0) {
        printf("Quadrado 4");
        return 0;
    }
    else if (x > 0 && y == 0) {
        printf("Eixo X");
        return 0;
    }
    else if (x == 0 && y > 0) {
        printf("Eixo Y");
        return 0;
    }
    else {
        printf("Origem");
        return 0;
    }  
}
