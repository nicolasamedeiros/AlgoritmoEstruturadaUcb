#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Numero: %d\n", &num, rand() % 10);
    printf("%d", num);
    //printf("Numero 2: %d", rand () % 10);
    return 0;
}
