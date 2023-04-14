#include<stdio.h>
#include<math.h>

#define pi 3.14159

int main()
{
    float raio, volume, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    volume = (4/3.0) * pi * pow(raio, 3);
    area = 4 * pi * pow(raio, 2);

    printf("A area e de %.2f\n", area);
    printf("O volume e de %.2f\n", volume);

    return 0;
}
