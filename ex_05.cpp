/* Fa�a um algoritmo que leia 50 n�meros inteiros e armazene-os em um vetor.

Na sequ�ncia, leia uma lista de 10 n�meros inteiros e verifique se cada um deles est� contido em alguma posi��o do vetor. Em caso positivo, mostre a posi��o do vetor em que ele se encontra.

Estrutura de dados: Um vetor de 50 posi��es de n�meros inteiros.

Comando de repeti��o: PARA (FOR), pois sabemos que leremos e processaremos 50 elementos. Logo, teremos uma solu��o com n�mero fixo e conhecido de vezes. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	//printf("Ol� Mundo !\n");
	
	const int tamVet = 10, tamLista = 5;
	int vet[tamVet], i, num, posiVet, numLocalizado;
	
	for(i = 0; i < tamVet; i++){
		printf("Digite o n�mero que deseja armazenar no vetor: ");
		scanf("%d", &vet[i]);
	}
	
	printf("///// \n");
	
	for(i = 0; i < tamLista; i++){
		printf("Digite o n�mero que deseja encontrar no vetor: \n");
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
			printf("O n�mero %d foi localizado na posi��o %d do vetor.\n\n", num, posiVet);
		} else {
			printf("O n�mero %d n�o foi no localizado no vetor\n\n", num);
		}
	}
	
	system ("pause");
	return 0;
}

