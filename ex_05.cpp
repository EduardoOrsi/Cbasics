/* Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.

Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. Em caso positivo, mostre a posição do vetor em que ele se encontra.

Estrutura de dados: Um vetor de 50 posições de números inteiros.

Comando de repetição: PARA (FOR), pois sabemos que leremos e processaremos 50 elementos. Logo, teremos uma solução com número fixo e conhecido de vezes. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	//printf("Olá Mundo !\n");
	
	const int tamVet = 10, tamLista = 5;
	int vet[tamVet], i, num, posiVet, numLocalizado;
	
	for(i = 0; i < tamVet; i++){
		printf("Digite o número que deseja armazenar no vetor: ");
		scanf("%d", &vet[i]);
	}
	
	printf("///// \n");
	
	for(i = 0; i < tamLista; i++){
		printf("Digite o número que deseja encontrar no vetor: \n");
		scanf("%d", &num);
		
		posiVet = 0;
		numLocalizado = 0;
		
		while(posiVet < tamVet && numLocalizado == 0){
			if(num == vet[posiVet]){
				numLocalizado = 1;
			} else {
				posiVet++;
			}
		}
		
		if(numLocalizado == 1) {
			printf("O número %d foi localizado na posição %d do vetor.\n\n", num, posiVet);
		} else {
			printf("O número %d não foi no localizado no vetor\n\n", num);
		}
	}
	
	system ("pause");
	return 0;
}

