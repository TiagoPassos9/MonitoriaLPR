#include <stdio.h>
#include <locale.h>

//Fa�a um programa que permita ao usu�rio entrar com uma matriz de tamanho 3 � 3 de n�meros inteiros. Em seguida, calcule um vetor contendo tr�s posi��es,
//em que cada posi��o dever� armazenar a soma dos n�meros de cada coluna da matriz.
//Exiba na tela esse array. Por exemplo, a matriz

//Declarando vari�veis globais.
int input, j, k;
int vet1[3], vet2[3], vet3[3], finalVet[3], *ptr;

//Fun��o para realizar o calculo do vetor final com as somas.
//Para cada soma essa fun��o vai ser chamada, passando o vetor a ser calculado, e ira retornar a soma entre eles.
int calculaVetores(int vet[]) {
	int valor = 0;
	//Percorrendo cada variavel do vetor, somando e entregando o resultado para a variavel valor.
	for (int i = 0; i < 3; i++) {
		valor += vet[i];
	}
	return valor;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("Calculando as colunas de uma matriz.\n\n");
    j = 0;
    k = 1;
    for (int i = 0; i < 9; i++) {
    	j++;
    	if (j == 1 && k == 1) {
		    //Apontando o ponteiro para o primeiro vetor.
		    ptr = vet1;
		} else if (j == 1 && k == 2) {
		    //Apontando o ponteiro para o segundo vetor.
    		ptr = vet2;
		} else if (j == 1 && k == 3) {
		    //Apontando o ponteiro para o terceiro vetor.
    		ptr = vet3;
		}
    	printf("Digite o %d n�mero da %d coluna:", j, k);
    	scanf("%d%*c", ptr);
    	ptr++;
		fflush(stdin);
		//Se j == 3, aumenta o valor do k que e volta o j para 0, o que vai fazer entrar em um dos ifs e mudar o ponteiro de posi��o.
    	if (j==3) {
    		j=0;
    		k++;
		}
	}
	//Fazendo a soma dos vetores e colocando cada um dentro do vetor final que ir� conter essas somas.
	finalVet[0] = calculaVetores(vet1);
	finalVet[1] = calculaVetores(vet2);
	finalVet[2] = calculaVetores(vet3);
	//Mostrando o vetor.
	for (int i = 0; i < 3; i++) {
		printf("%d ",finalVet[i]);
	}
    return 0;
}
