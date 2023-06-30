#include <stdio.h>
#include <locale.h>

//Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros. Em seguida, calcule um vetor contendo três posições,
//em que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
//Exiba na tela esse array. Por exemplo, a matriz
//													[5 -8 10]
//													[1  2 15]
//													[25 10 7]
//deverá gerar o vetor
//												  	[31 4 32]

int input, j, k;
int vet[3][3], finalVet[3], *ptr;

//Criando função para realizar a soma da matriz e transformar em um vetor.
void calculaVetores(int v[3][3], int v2[]) {
	//Criando e inicializando as variáveis
	int valor1 = 0;
	int valor2 = 0;
	int valor3 = 0;

	//Percorre cada valor da matriz, se ele estiver na primeira coluna ele irá somar no valor1, se tiver na segunda coluna irá somar no valor2, se tiver na terceira coluna irá somar no valor3.
	//O primeiro for percorre as linhas, e o segundo percorre as colunas.
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				valor1 += v[i][j];
			} else if (j == 1) {
				valor2 += v[i][j];
			} else if (j == 2) {
				valor3 += v[i][j];
			}
		}
	}
	//Passando o valor das colunas somadas para o vetor final que será mostrado.
	finalVet[0] = valor1;
	finalVet[1] = valor2;
	finalVet[2] = valor3;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Calculando as colunas de uma matriz.\n\n");

	//Colocando o ponteiro no vetor vet para facilitar pegar os números no scanf.
    ptr = &vet[0][0];
    j = 0;
    k = 1;

	//Percorrendo o vetor vet com o ponteiro para pegar a matriz a ser somada.
	for (int i = 0; i < 9; i++) {
    	j++;
    	printf("Digite o número da linha %d coluna %d: ", k, j);
    	scanf("%d", ptr);
    	ptr++;
		fflush(stdin);

    	if (j==3) {
    		j=0;
    		k++;
		}
	}

	//Mostrando na tela a matriz recebida.
	printf("\nMatriz recebida:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ",vet[i][j]);
		}
		printf("\n");
	}

	//Chamando a função calculaVetores() que está na linha 11 desse código.
	calculaVetores(vet, finalVet);

	//Mostrando na tela a matriz somada.
	printf("Soma das colunas da matriz:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d ", finalVet[i]);
	}

    return 0;
}
