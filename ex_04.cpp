/* Desafio: Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras: 
-> Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor.
-> Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
Ao final, mostre o conteúdo dos dois vetores simultaneamente.

Estrutura de dados: Dois vetores de 50 posições de números inteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL, "Portuguese");
	
	const int tamVet = 50;
	int vetA[tamVet], vetB[tamVet], i;
	
	for(i = 0; i < tamVet; i++){
		printf("Insira o número: ");
		scanf("%d", &vetA[i]);
		
		if(vetA[i] % 2 == 0){
		 	vetB[i] = vetA[i] + 1;
		} else {
		 	vetB[i] = vetA[i] - 1; 
		}
	}
		
	for(i = 0; i < tamVet; i++){
		printf("Elemento do VetorA na posição %d = %d\n", i, vetA[i]);
		printf("Elemento do VetorB na posição %d = %d\n", i, vetB[i]);
	}
	
	
	system ("pause");
	return 0;
}


