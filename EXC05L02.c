/*******************************************************************************
5. Escreva um programa que peça ao usuário para inserir 10 números inteiros. O
programa deve contar quantos números são pares e quantos são ímpares, e exibir
esses valores no final. (0.3 ponto)
Entrada: 10 números inteiros.
Saída: quantidade de números pares e ímpares.
*******************************************************************************/
#include <stdio.h>

void imparPar(int n){
    int par = 0, imp = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &n);

        if (n % 2 == 0) {
            par++;
        } else {
            imp++;
        }
    }

    printf("Pares: %d\n", par);
    printf("Impares: %d\n", imp);
}

int main() {
    int n; 
    
    imparPar(n);
    
    return 0;
}
