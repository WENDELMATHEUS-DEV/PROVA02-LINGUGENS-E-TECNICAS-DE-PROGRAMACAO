/*******************************************************************************
3. Escreva um programa em C que solicite ao usuário as notas de 5 alunos e suas
respectivas pesos, calcule a média ponderada de cada aluno e ao final exiba a
média final da turma. (0.1 ponto)
Entradas: 5 pares de valores (nota e peso) para cada aluno.
Saída: a média ponderada de cada aluno e a média final da turma.
*******************************************************************************/
#include <stdio.h>
float media(float n, int p) {
	int i;
	float m;
	for(i=1; i<=5; i++)
	return m = (n * p) / 2;
}

int main () {
	
	float n, mediaPon, mediaTurma;
	int p, i, somaPeso;
	
	for (i=1; i<= 5; i++) {
	printf("Informe a nota do %d aluno:\n", i);
	scanf("%f", &n);
	printf("Informe o peso da nota do %d aluno:\n", i);
	scanf("%d", &p);
	
	somaPeso = (somaPeso + p);
	mediaPon = media(n,p);
	printf("A media ponderada do aluno e: %.2f\n\n", mediaPon);
	mediaTurma = (mediaTurma + mediaPon);
}

printf("A media da turma e de: %2.f\n", mediaTurma / somaPeso);

return 0;
}
