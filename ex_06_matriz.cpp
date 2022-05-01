/* DESAFIO: Fa�a um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de n�meros pares e �mpares armazenados na matriz. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int tamLinha = 4, tamColuna = 4, matriz[tamLinha][tamColuna], i, j, contPar = 0, contImpar = 0;
		
	for(i = 0; i < tamLinha; i++){
		for(j = 0; j < tamColuna; j++){
			printf("Elemento[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);
			matriz[i][j] % 2 == 0 ? contPar++ : contImpar++;
			}
		}
	
	printf("N�meros pares: %d\nN�meros �mpares: %d\n", contPar, contImpar);

	system("pause");
	return 0;
}

