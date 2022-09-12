/*
	
	Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e calcule a tabuada de N.
	 Mostre a tabuada na forma: 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.

*/

#include<stdio.h>

main() {
	int num, i = 0;
	
	printf("Digite um numero (entre 1 e 10): ");
	scanf("%d", &num);
	
	while(num < 0 || num > 10) {
		printf("Digite um numero (entre 1 e 10): ");
		scanf("%d", &num);
	}
	
	while(i <= 10) {
		printf("%d x %d = %d\n", i, num, num * i);
		i++;
	}
	
}
