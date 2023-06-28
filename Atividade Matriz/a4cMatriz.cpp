#include <stdio.h>
#include <locale.h>

//Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros. Em seguida, calcule um vetor contendo três posições,
//em que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
//Exiba na tela esse array. Por exemplo, a matriz
int input, j, k;
int vet1[3][3], finalVet[3], *ptr;

int calculaVetores(int vet[]) {
	int valor = 0;
	for (int i = 0; i < 3; i++) {
		valor += vet[i];
	}
	return valor;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("Calculando as colunas de uma matriz.\n\n");
    ptr = vet1;
    j = 0;
    k = 1;
    for (int i = 0; i < 9; i++) {
    	j++;
    	if (j == 1 && k == 1) {
		} else if (j == 1 && k == 2) {
    		ptr = vet2;
		} else if (j == 1 && k == 3) {
    		ptr = vet3;
		}
    	printf("Digite o %d número da %d coluna:", j, k);
    	scanf("%d%*c", ptr);
    	ptr++;
		fflush(stdin);
    	if (j==3) {
    		j=0;
    		k++;
		}
	}
	finalVet[0] = calculaVetores(vet1);
	finalVet[1] = calculaVetores(vet2);
	finalVet[2] = calculaVetores(vet3);
	for (int i = 0; i < 3; i++) {
		printf("%d ",finalVet[i]);
	}
    return 0;
}
