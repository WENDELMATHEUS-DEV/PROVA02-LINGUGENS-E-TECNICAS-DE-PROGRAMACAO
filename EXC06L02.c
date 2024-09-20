/*******************************************************************************
6. Escreva um programa que solicite dois números inteiros positivos ao usuário: um
valor inicial e um valor final. O programa deve então exibir todos os números primos
dentro desse intervalo. Se não houver números primos no intervalo, o programa
deve informar isso. (0.3 ponto)
Entrada: dois números inteiros positivos (inicial e final).
Saída: números primos no intervalo ou uma mensagem informando que não há
números primos.
*******************************************************************************/
#include <stdio.h>

void prim(int ini, int fim) {
    for (int n = ini, p; n <= fim; n++) {
        p = (n > 1);
        for (int i = 2; i * i <= n && p; i++) 
            if (n % i == 0) p = 0;
        if (p) printf("%d ", n);
    }
    printf("\n");
}

int main() {
    int ini, fim;
    printf("Informe dois numeros inteiros positivos: valor inicial - valor final\n");
    scanf("%d %d", &ini, &fim);
    if (ini > 0 && fim > 0 && ini <= fim) 
    prim(ini, fim);
    else 
    printf("Valores invalidos.\n");
    return 0;
}
