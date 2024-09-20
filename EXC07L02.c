/*******************************************************************************
7. Crie um programa que peça ao usuário para inserir as notas de 5 alunos. Para
cada aluno, o programa deve calcular a média. Se a média for maior ou igual a 7.0,
o aluno é aprovado; caso contrário, ele é reprovado. Ao final, o programa deve exibir
a média de cada aluno e se ele foi aprovado ou reprovado. (0.3 ponto)
Entrada: 5 notas (uma por aluno).
Saída: média de cada aluno e status de aprovação.
*******************************************************************************/
#include <stdio.h>

void aprovado(float media) {
    if (media >= 7.0)
        printf("Media: %.2f - Aprovado\n", media);
    else
        printf("Media: %.2f - Reprovado\n", media);
}

int main() {
    float nota;
    const int nAlunos = 5;

    for (int i = 1; i <= nAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        aprovado(nota);
    }

    return 0;
}
