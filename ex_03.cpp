// Desafio : Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL, "Portuguese");
	//printf("Olá Mundo!\n");
	
	int vet[5] = {0, 0, 0, 0, 0}, i;
	char letra;
	
	printf("Insira uma palavra ou frase: ");
	scanf("%c", &letra);
	 
	while(letra != 'z'){
		switch(letra){
			case 'a':
				vet[0]++;
				break;
			case 'e':
				vet[1]++;
				break;
			case 'i':
				vet[2]++;
				break;
			case 'o':
				vet[3]++;
				break;	
			case 'u':
				vet[4]++;
				break;			
		}
		scanf("%c", &letra);
	}	
	
	printf("\nQuantidade de cada vogal, em ordem\n");
	
	for(i = 0; i < 5; i++){
		printf("%d, ", vet[i]);
	}
	printf("\n");
	system ("pause");	
	return 0;
}

