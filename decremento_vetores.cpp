/* Desafio : Elaborar um programa que leia 100 números inteiros e mostre-os na ordem inversa.*/ 

// Inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal 
int main (void){
	setlocale(LC_ALL, "Portuguese"); // função para localização em Pt-br
	
	int vetor[100], i; // Declaração das variáveis
	
	// Captura e armazenamento dos valores digitados pelo usuário em cada posição do vetor
	for(i = 0; i < 100; i++){
		printf("Insira um número: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("\nA ordem inversa dos valores digitados é: \n\n");
	
	// decremento da ordem das posições do vetor.
	for(i = 99; i >= 0; i--){
		printf("%d\n", vetor[i]);
	}		
	
	system ("pause");
	return 0;
}
