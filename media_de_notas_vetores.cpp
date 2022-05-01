/* Desafio : Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma. */ 

// Inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal 
int main (void){
	setlocale(LC_ALL, "Portuguese"); // função para localização em Pt-br
	
	const int tamIndice = 20;
	float aluno[tamIndice], soma = 0, mediaTurma; 
	int i;

	printf("Insira a nota dos alunos: \n");
	for(i = 0; i < tamIndice; i++){
		printf("Aluno %d : ", i);
		scanf("%f", &aluno[i]);
		soma += aluno[i]; // soma dos valores inseridos. 
	}
	
	mediaTurma = soma / tamIndice; // Cálculo da média do vetor.	
	printf("\nA média da turma é %.2f\n", mediaTurma);
	
	printf("\nAs notas maiores ou iguais à media da turma são: \n");
	for(i = 0; i < tamIndice; i++){
		if(aluno[i] >= mediaTurma) {
			printf("Aluno %d -> %.2f \n", i,  aluno[i]);
		}
	}
		
	system ("pause");
	return 0;
}

