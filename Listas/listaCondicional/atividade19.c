#include<stdio.h>

int main () {
    float n1, n2 , n3, n4, media, exame, n_final;

    printf("Digite as quatro notas do aluno: ");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno Aprovado.");
    }
        else if(media >= 5.0 && media <= 6.9) {
            printf("Aluno em exame\n");
            
            printf("Nota de exame: ");
            scanf("%.1f", &exame);

            n_final = media + exame / 2;

            if (n_final >= 5.0) {
                printf("Aluno Aprovado\n");
                printf("Media: %.1f", n_final);
            } 
            else{
                printf("Aluno Reprovado\n");
                printf("Media: %.1f", n_final);
            }
        } 
            else {
                printf("Aluno Reprovado");
            }
}