/* Desafio : Elaborar um programa que leia 100 n�meros inteiros e mostre-os na ordem inversa.*/ 

// Inclus�o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal 
int main (void){
	setlocale(LC_ALL, "Portuguese"); // fun��o para localiza��o em Pt-br
	
	int vetor[100], i; // Declara��o das vari�veis
	
	// Captura e armazenamento dos valores digitados pelo usu�rio em cada posi��o do vetor
	for(i = 0; i < 100; i++){
		printf("Insira um n�mero: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("\nA ordem inversa dos valores digitados �: \n\n");
	
	// decremento da ordem das posi��es do vetor.
	for(i = 99; i >= 0; i--){
		printf("%d\n", vetor[i]);
	}		
	
	system ("pause");
	return 0;
}
