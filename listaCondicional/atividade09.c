#include<stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 5) {
        printf("Muito Jovem");
    }
    else if (idade >= 5 && idade < 8) {
        printf("Infantil A");
    } else if (idade >= 8 && idade < 11) {
        printf("Infantil B");
    } else if (idade >= 11 && idade < 14) {
        printf("Juvenil A");
    } else if (idade >= 14 && idade < 18) {
        printf("Juvenil B");
    }
    else if (idade < 0) {
        printf("Idade Invalida");
    }
    else {
        printf("Maiores de 18 anos");
    }
}