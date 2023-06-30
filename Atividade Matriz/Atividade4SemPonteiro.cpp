#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int vetor[3];
    int soma;

    printf("PREENCHA A MATRIZ:\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("INSIRA O ELEMENTO [%d][%d]: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    system("cls");

    //MOSTRAR MATRIZ
    printf("       MATRIZ:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("  [%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //SOMAR DA MATRIZ
    printf("   MATRIZ SOMADA:\n");
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            soma += matriz[i][j];
        }
        vetor[j] = soma;
        soma = 0;
    }
    printf("\n");

    //MOSTRA VETOR SOMADO
    printf("       VETOR:\n");
    for (int i = 0; i < 3; i++) {
        printf("  [%d]  ", vetor[i]);
    }
}
