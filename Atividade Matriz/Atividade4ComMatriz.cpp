#include <stdio.h>
#include <locale.h>

//Fa�a um programa que permita ao usu�rio entrar com uma matriz de tamanho 3 � 3 de n�meros inteiros. Em seguida, calcule um vetor contendo tr�s posi��es,
//em que cada posi��o dever� armazenar a soma dos n�meros de cada coluna da matriz.
//Exiba na tela esse array. Por exemplo, a matriz
//													[5 -8 10]
//													[1  2 15]
//													[25 10 7]
//dever� gerar o vetor
//												  	[31 4 32]

int input, j, k;
int vet[3][3], finalVet[3], *ptr;

//Criando fun��o para realizar a soma da matriz e transformar em um vetor.
void calculaVetores(int v[3][3], int v2[]) {
	//Criando e inicializando as vari�veis
	int valor1 = 0;
	int valor2 = 0;
	int valor3 = 0;

	//Percorre cada valor da matriz, se ele estiver na primeira coluna ele ir� somar no valor1, se tiver na segunda coluna ir� somar no valor2, se tiver na terceira coluna ir� somar no valor3.
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
	//Passando o valor das colunas somadas para o vetor final que ser� mostrado.
	finalVet[0] = valor1;
	finalVet[1] = valor2;
	finalVet[2] = valor3;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Calculando as colunas de uma matriz.\n\n");

	//Colocando o ponteiro no vetor vet para facilitar pegar os n�meros no scanf.
    ptr = &vet[0][0];
    j = 0;
    k = 1;

	//Percorrendo o vetor vet com o ponteiro para pegar a matriz a ser somada.
	for (int i = 0; i < 9; i++) {
    	j++;
    	printf("Digite o n�mero da linha %d coluna %d: ", k, j);
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

	//Chamando a fun��o calculaVetores() que est� na linha 11 desse c�digo.
	calculaVetores(vet, finalVet);

	//Mostrando na tela a matriz somada.
	printf("Soma das colunas da matriz:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d ", finalVet[i]);
	}

    return 0;
}
