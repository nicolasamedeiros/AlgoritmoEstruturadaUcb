#include<stdio.h>

int main()
{
    float n1[4], n2[4], media[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%f%f", &n1[i], &n2[i]);
        media[i] = (n1[i] + n2[i]) / 2;
        printf("%.2f", media[i]);
    }
       
    return 0;
}
