/* Desafio : Fa�a um programa que leia a nota de 20 alunos da turma e mostre as que s�o iguais ou superiores � m�dia da turma. */ 

// Inclus�o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal 
int main (void){
	setlocale(LC_ALL, "Portuguese"); // fun��o para localiza��o em Pt-br
	
	const int tamIndice = 20;
	float aluno[tamIndice], soma = 0, mediaTurma; 
	int i;

	printf("Insira a nota dos alunos: \n");
	for(i = 0; i < tamIndice; i++){
		printf("Aluno %d : ", i);
		scanf("%f", &aluno[i]);
		soma += aluno[i]; // soma dos valores inseridos. 
	}
	
	mediaTurma = soma / tamIndice; // C�lculo da m�dia do vetor.	
	printf("\nA m�dia da turma � %.2f\n", mediaTurma);
	
	printf("\nAs notas maiores ou iguais � media da turma s�o: \n");
	for(i = 0; i < tamIndice; i++){
		if(aluno[i] >= mediaTurma) {
			printf("Aluno %d -> %.2f \n", i,  aluno[i]);
		}
	}
		
	system ("pause");
	return 0;
}

