#include<stdio.h>
#include<math.h>

#define PI 3.14159 

int main () {
    int raio;
    float volume, area;

    printf("Digite o raio: ");
    scanf("%d", &raio);

    volume = (4/3.0) * PI * pow(raio, 3);
    area = 4 * PI * pow(raio, 2);

    printf("O volume da esfera e %.2f\n", volume);
    printf("A area da esfera e %.2f", area);
}