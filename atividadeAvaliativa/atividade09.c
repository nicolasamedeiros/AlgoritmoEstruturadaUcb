#include <stdio.h>

int main()
{
    printf("---LISTA DE FRUTAS---\n");
    printf("1 - ABACAXI – 5,00 a unidade\n");
    printf("2 - MAÇA – 1,00 a unidade\n");
    printf("3 - PERA – 4,00 a unidade\n");
    
    int sumMaca = 0, sumAbacaxi = 0, sumPera = 0, codFruta, quantidade;
    
    do {
        printf("Digite o codigo da fruta: ");
        scanf("%d", &codFruta);

        if (codFruta == 1) {
        printf("Digite a quantidade de abacaxi que você deseja: ");
        scanf("%d", &quantidade);
        sumAbacaxi = quantidade * 5;
    }
    else if (codFruta == 2) {
        printf("Digite a quantidade de maça que você deseja: ");
        scanf("%d", &quantidade);
        sumMaca = quantidade * 1;
    }
    else if (codFruta == 3) {
        printf("Digite a quantidade de pera que você deseja: ");
        scanf("%d", &quantidade);
        sumPera = quantidade * 4;
    }
    } while (codFruta > 0 && codFruta < 4);
    
    printf("A soma do pedido todo foi R$ %d", sumAbacaxi + sumMaca + sumPera);
}