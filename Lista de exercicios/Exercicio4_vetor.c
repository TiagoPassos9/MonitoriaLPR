#include <stdio.h>

int main() {
    int i;
    int A[6]={1,0,5,-2,-5,7};
    int soma = A[0]+A[1]+A[5];
    A[4] = 100;
    printf("\nResultado da soma:%d\n\n", soma);
    for(i=0; i<6; i++){
        printf("Array A posicao [%d] = %d\n", i, A[i]);
    }

    return 0;
}
