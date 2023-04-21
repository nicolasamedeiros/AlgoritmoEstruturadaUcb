#include<stdio.h>

float formula(float F, float K) {
    float C;
    C = K - F + 273.15;
    return C;
}

int main()
{
    int escolha;
    float F, C, K;

    printf("Escolha a conversao \n 1 - Celsius para farenheint \n 2- ");

    printf("Digite o valor de K: ");
    scanf("%f", &K);
    printf("Digite o valor de F: ");
    scanf("%f", &F);
    
    
    
    C = formula(F, K);
    printf("%.2f", C);
}
