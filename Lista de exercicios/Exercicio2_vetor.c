#include <stdio.h>

int main() {
    int valores[6];
    int i;


    //PREENCHE O VETOR
    for (i = 0; i < 5; i++) {
        printf("Insira o valor [%d]: ", i);
        scanf("%d", &valores[i]);
    }

    //ORDEM NORMAL
    printf("\nOrdem normal do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    //ORDEM INVERSA
    printf("\nOrdem inversa do vetor:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", valores[i]);
    }

    return 0;
}
