#include<stdio.h>

int main() {
    float altura, peso;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (altura < 1.20 && peso < 60){
        printf("A");
    }
    else if (altura >= 1.20 && altura <= 1.70 && peso < 60) {
        printf("B");
    }
    else if  (altura > 1.70 && peso < 60) {
        printf("C");
    }
    else if (altura < 1.20 && peso >= 60 && peso < 91) {
        printf("D");
    }
    else if (altura >= 1.20 && altura < 1.71 && peso >= 60 && peso < 91) {
        printf("E");
    }
    else if (altura > 1.70 && peso >= 60 && peso < 91) {
        printf("F");
    }
    else if (altura < 1.20 && peso > 90) {
        printf("G");
    }
    else if (altura >= 1.20 && altura < 1.71 && peso > 90) {
        printf("H");
    }
    else {
        printf("I");
    }
}