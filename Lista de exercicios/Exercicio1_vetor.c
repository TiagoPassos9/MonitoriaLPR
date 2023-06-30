#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[6];
    int i;

    //preenche o vetor
    for (i = 0; i <6; i++){
        printf("Preencha o vetor na posicao -> [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    //imprime o vetor
    for (i = 0; i <6; i++) {
        printf("\nVetor posicao %d -> %d: ", i, vetor[i]);
    }

    return 0;
}
