/* DESAFIO: Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4. Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).

Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3]. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

	int tamLinha = 4, tamColuna = 4, matriz[tamLinha][tamColuna], i, j; 
	
	for(i = 0; i < tamLinha; i++){
		for(j = 0; j < tamColuna; j++){
			printf("Insira o número na Linha [%d], Coluna [%d]: ", i, j);
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

