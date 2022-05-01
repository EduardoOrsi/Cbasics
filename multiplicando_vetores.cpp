/* Desafio : Elaborar um programa que armazene 10 numeros e multiplique-os por 10.*/ 

// Inclus�o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal 
int main (void){
	setlocale(LC_ALL, "Portuguese"); // fun��o para localiza��o em Pt-br
	
	// Declarando vetores e vari�veis
	int a[10], b[10], i; 
	
	// Inicializa��o do vetor a de acordo com o valor inserido pelo usu�rio
	for(i = 0; i < 10; i++){
		printf("%d - Digite os dados para o vetor A: ", i);
		scanf("%d", &a[i]);
	}
		
	printf("\n");
	
	//  Impress�o dos valores armazenados nos indices
	printf("Os dados inseridos foram: \n");
	for(i = 0; i < 10; i++){
		printf("a[%d] = %d\n", i, a[i]);
	}	
	
	printf("\n");
	
		// Multiplica��o dos valores do inidice
	for(i = 0; i < 10; i++){
		b[i] = a[i] * 10;
		printf("O valor multiplicado e %d\n", b[i]);
	}
	
	system ("pause");
	return 0;
}
