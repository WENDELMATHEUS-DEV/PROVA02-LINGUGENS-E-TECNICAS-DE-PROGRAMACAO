/******************************************************************************
1. Escreva um programa em C que solicite ao usuário o valor inicial de um
investimento, a taxa de juros anual (em porcentagem) e o número de anos que o
dinheiro será investido. O programa deve calcular o valor final do investimento ao
final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
acumulado ano a ano. (0.1 ponto)
Entradas: valor inicial, taxa de juros anual, número de anos.
Saída: tabela mostrando o ano e o valor do investimento ao final de cada ano.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

void cInvest(float vInicial, float taxaJuros, int anos) {
    printf("\nAno\tValor do ano\n");
    printf("-------------------------\n");

    for (int i = 1; i <= anos; i++) {
        float vFinal = vInicial * pow(1 + (taxaJuros / 100), i);
        printf("%d\t%.2f\n", i, vFinal);
    }
}

int main() {
    float vInicial, taxaJuros;
    int anos;

    printf("Informe o valor do investimento inicial: ");
    scanf("%f", &vInicial);

    printf("Informe o valor da taxa de juros anual (em %%): ");
    scanf("%f", &taxaJuros);

    printf("Informe o numero de anos que sera investido: ");
    scanf("%d", &anos);

    cInvest(vInicial, taxaJuros, anos);

    return 0;
}
