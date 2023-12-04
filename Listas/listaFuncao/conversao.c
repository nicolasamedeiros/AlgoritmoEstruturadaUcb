/**
 * • De graus Celsius(C) para graus Fahrenheit(F): 
F = (9 ∗ C/5) + 32)

• De graus Fahrenheit (F) para graus Celsius (C): 
C = (F − 32) ∗ 5/9

• De graus Celsius (C) para graus Kelvin (K): K = C + 273.15

• De graus Kelvin (K) para graus Celsius (C): C = K − 273.15

• De graus Celsius (C) para graus Réaumur (Re): Re = C ∗ 4/5

• De graus Réaumur (Re) para graus Celsius (C): C = Re ∗ 5/4

• De graus Kelvin (K) para graus Rankine (R): R = K ∗ 1.8

• De graus Rankine (R) para graus Kelvin (K): K = R/1.8
**/

#include<stdio.h>

float celsiusFareheint(float C) {
    float F;
    F = (9.0 * C / 5.0) + 32;
    return F;
}

float fahrenheitCelsius(float F) {
    float C;
    C = (F - 32) * 5/9;
    return C;
}

float celsiusKelvin(float C) {
    float K;
    K = C + 273.15;
    return K;
}

float kelvinCelsius(float K) {
    float C;
    C = K - 273.15;
    return C;
}

float celsiusReamur(float C) {
    float R;
    R = C * 4/5;
    return R;
}

float reamurCelsius(float R) {
    float C;
    C = R * 5/4;
    return C;
}

float kelvinRankine (float K) {
    float R;
    R = K * 1.8;
    return R;
}

float rankineKelvin (float R) {
    float K;
    K = R / 1.8;
    return K;
}

int main()
{
    int conv;
    float C, F, K, R;

    printf("Digite a conversao que deseja fazer: ");
    scanf("%d", &conv);

    switch (conv)
    {
    case 1:
        
        printf("Digite o valor em celsius: ");
        scanf("%f", &C);

        F = celsiusFareheint(C);

        printf("O valor em farenheit eh %.2f\n", F);
        break;
    
    case 2:
        
        printf("Digite o valor em fahrenheit: ");
        scanf("%f", &F);

        C = fahrenheitCelsius(F);

        printf("O valor em celsius eh %.2f\n", C);
        break;

    case 3:
        
        printf("Digite o valor em Celsius: ");
        scanf("%f", &C);

        K = celsiusKelvin(C);

        printf("O valor em Kelvin eh %.2f\n", K);
        break;

    case 4:
        
        printf("Digite o valor em Kelvin: ");
        scanf("%f", &K);

        C = kelvinCelsius(K);

        printf("O valor em celsius eh: %.2f", C);
        break;
    
    case 5:
        
        printf("Digite o valor em celsius: ");
        scanf("%f", &C);

        R = celsiusReamur(C);

        printf("O valor em Reamur eh %.2f", R);
        break;
    
    case 6:

        printf("Digite o valor em Reamur: ");
        scanf("%f", &R);

        C = reamurCelsius(R);

        printf("O valor em celsius eh %.2f", C);
        break;
    
    case 7:

        printf("Digite o valor em Kelvin: ");
        scanf("%f", &K);

        R = kelvinRankine(K);

        printf("O valor em rankine eh %.2f", R);
        break;

    case 8:

        printf("Digite o valor em rankine: ");
        scanf("%f", &R);

        K = rankineKelvin(R);

        printf("O valor em Kelvin eh %.2f", K);
        break;

    default:
        break;
    }
}
