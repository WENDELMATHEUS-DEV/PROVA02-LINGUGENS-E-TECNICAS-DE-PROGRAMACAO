/******************************************************************************
2. Um número perfeito é aquele que é igual à soma de seus divisores próprios
(excluindo ele mesmo). Escreva um programa que solicite ao usuário um número
inteiro positivo e verifique se esse número é perfeito. O programa deve utilizar um
laço para somar os divisores e, no final, informar se o número é perfeito ou não. (0.1
ponto)
Entradas: número inteiro positivo.
Saída: informar se o número é perfeito ou não.
*******************************************************************************/
#include <stdio.h>
#include <math.h>
void verNumPerf(int num){
    int soma = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num) {
        printf("%d e um nemero perfeito.\n", num);
    } else {
        printf("%d nao e um numero perfeito.\n", num);
    }
}

int main() {
    int num;
    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("O numero deve ser positivo. Informe novamente.\n");
        }
        
    } while (num <= 0); 
    
    verNumPerf(num);
    
    return 0;
}
