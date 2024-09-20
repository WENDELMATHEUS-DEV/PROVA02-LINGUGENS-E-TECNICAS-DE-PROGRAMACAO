//8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
//tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
//maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
//para acertar. No final, informe se o usuário acertou ou não.


#include <stdio.h>
#include <stdlib.h>
#include<time.h>



void adivinha(int n){
	int p, i, tent = 7;
	
	printf("-----------------------------------------------------------------\n");
	printf("Acerte um numero de 1 a 100! voce tem %d chances. \n", tent);
	printf("-----------------------------------------------------------------\n");
	
	
	for(i = 0; i < tent; i++){
		printf("%d chance:", i + 1);
		scanf("%d", &p);
		
		if (p == n) {
			printf("Parabens! Voce acertou o numero %d. \n", n);
			return;
		}else if(p < n){
			printf("O numero e maior. \n");
		}else{
			printf("O numero e menor. \n");
		}
	}
	
	printf("Voce esgotou suas chances. O numero era %d, \n", n);
}



int main() {
	int num;
	
	srand(time(NULL));
	num = rand() % 100 + 1;
	
	adivinha(num);
	
}
