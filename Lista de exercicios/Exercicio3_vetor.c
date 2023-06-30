#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[5];
    int i;
    int soma = 0;
    float mediaFinal = 0;

    //preenche o vetor
    for (i = 0; i <5; i++){
        printf("Preencha o vetor na posicao ->[%d]: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    // exibe valor da soma e a média final
    printf("\nvalor da soma e = %d\n", soma);
    mediaFinal = soma / 5;
    printf("A media dos elementos do vetor e = %.2f", mediaFinal);
    return 0;
}
