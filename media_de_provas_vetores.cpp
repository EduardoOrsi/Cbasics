/* Em uma turma com 50 alunos, cada um faz 3 provas por semestre. Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:
-> A média de cada prova;
-> A média de cada aluno;
-> A média da turma; */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
//	printf("Olá, Mundo !\n");

	const int qteAluno = 50;
	const float mediaSemestre = 7.0; // ## EXTRA ## -> O programa deve exibir se o aluno foi aprovado ou não. 
	float prova1[qteAluno], prova2[qteAluno], prova3[qteAluno], somaP1, somaP2, somaP3, mediaP1, mediaP2, mediaP3, mediaAluno, mediaTurma;
	int i, posiVet;
	
	printf("Calcule a média obtida pelos alunos em cada prova, a média de cada aluno e a média da turma.\n\n");
	
	for(i = 0; i < qteAluno; i++){	
		printf("Insira a nota da prova 1 do aluno %d: ", i); //Armazena notas no vetor prova1
		scanf("%f", &prova1[i]);
		printf("Insira a nota da prova 2 do aluno %d: ", i); //Armazena notas no vetor prova2
		scanf("%f", &prova2[i]);
		printf("Insira a nota da prova 3 do aluno %d: ", i); //Armazena notas no vetor prova3
		scanf("%f", &prova3[i]);
		printf("\n");
	}
	
	printf("//Média de cada semestre//\n"); // Média de cada prova
	somaP1 = 0; // Inicio das variáveis 
	somaP2 = 0;
	somaP3 = 0;
	
	for(posiVet = 0; posiVet < qteAluno; posiVet++){
		somaP1 += prova1[posiVet];
	}
	mediaP1 = somaP1 / qteAluno;	
	printf("A média da prova 1 foi %.2f\n", mediaP1);
	
	for(posiVet = 0; posiVet < qteAluno; posiVet++){
		somaP2 += prova2[posiVet];
	}
	mediaP2 = somaP2 / qteAluno;	
	printf("A média da prova 2 foi %.2f\n", mediaP2);
	
	for(posiVet = 0; posiVet < qteAluno; posiVet++){
		somaP3 += prova3[posiVet];
	}
	mediaP3 = somaP3 / qteAluno;	
	printf("A média da prova 1 foi %.2f\n", mediaP3);
	
	printf("\n//Média de cada aluno//\n"); // Média de cada aluno
	for(posiVet = 0; posiVet < qteAluno; posiVet++){
		mediaAluno = (prova1[posiVet] + prova2[posiVet] + prova3[posiVet]) / 3;
		printf("A média do aluno %d foi %.2f\n", posiVet, mediaAluno);
		if(mediaAluno >= mediaSemestre){
			printf("O Aluno está APROVADO.\n\n");
		} else {
			printf("O Aluno está REPROVADO.\n\n");
		}
	}
	
	printf("\n//Média da turma//\n"); // Média da turma	
	mediaTurma = (mediaP1 + mediaP2 + mediaP3) / 3;
	printf("A média da turma foi %.2f\n", mediaTurma);
	
	printf("\n          //////////FIM//////////\n");
	system("pause");
	return 0;
}

