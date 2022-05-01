/* Desafio: Fa�a um algoritmo que leia 50 n�meros inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 n�meros inteiros cada elemento do primeiro, observando as seguintes regras: 
-> Se o n�mero for par, preencha a mesma posi��o do segundo vetor com o n�mero sucessor do contido na mesma posi��o do primeiro vetor.
-> Se o n�mero for �mpar, preencha a mesma posi��o do segundo vetor com o n�mero antecessor do contido na mesma posi��o do primeiro vetor.
Ao final, mostre o conte�do dos dois vetores simultaneamente.

Estrutura de dados: Dois vetores de 50 posi��es de n�meros inteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL, "Portuguese");
	
	const int tamVet = 50;
	int vetA[tamVet], vetB[tamVet], i;
	
	for(i = 0; i < tamVet; i++){
		printf("Insira o n�mero: ");
		scanf("%d", &vetA[i]);
		
		if(vetA[i] % 2 == 0){
		 	vetB[i] = vetA[i] + 1;
		} else {
		 	vetB[i] = vetA[i] - 1; 
		}
	}
		
	for(i = 0; i < tamVet; i++){
		printf("Elemento do VetorA na posi��o %d = %d\n", i, vetA[i]);
		printf("Elemento do VetorB na posi��o %d = %d\n", i, vetB[i]);
	}
	
	
	system ("pause");
	return 0;
}


