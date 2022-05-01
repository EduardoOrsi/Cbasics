/* DESAFIO: Fa�a um algoritmo que leia n�meros inteiros e armazene-os na matriz 4x4. Por�m, na diagonal principal, n�o armazene o n�mero lido, e sim um 0 (zero).

Na diagonal principal, os elementos t�m linha = colona: [0][0], [1][1], [2][2], [3][3]. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

	int tamLinha = 4, tamColuna = 4, matriz[tamLinha][tamColuna], i, j; 
	
	for(i = 0; i < tamLinha; i++){
		for(j = 0; j < tamColuna; j++){
			printf("Insira o n�mero na Linha [%d], Coluna [%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
				if(i == j){
					matriz[i][j] = 0;
				}
			} 
		}	
	
	printf ("\nListagem dos elementos da matriz\n");

	for(i = 0;i < tamLinha; i++){
		for (j = 0 ;j < tamColuna; j++){
			printf("%d ",matriz[i][j]);
		}	
		printf("\n");
	}
	
	printf ("\n");

	system("pause");
	return 0;
}

