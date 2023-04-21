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

• De graus Rankine (R) para graus Kelvin (K): K = R/1.8*/

#include<stdio.h>

float celsiusFareheint(float C) {
    float F;
    F = (9.0 * C / 5.0) + 32;
    return F;
}

int main()
{
    float C, F;
    
    printf("Digite o valor em celsius: ");
    scanf("%f", &C);

    F = celsiusFareheint(C);

    printf("O valor em farenheit eh %.2f", F);
}
