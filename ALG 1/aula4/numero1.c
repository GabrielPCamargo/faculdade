/*
	Especificação: Ler 2 números inteiros e fazer a soma, porém num1 deve ter valores de 1 até 5 e num2 deve ser > 10;
*/

#include<stdio.h>

main() {
	int num1, num2;
	
	printf("Digite o num1: (entre 1 a 5)");
	scanf("%d", &num1);
	
	if(num1 >= 1 && num1 <= 5) {
		printf("Digite o num2: (maior que 10)");
		scanf("%d", &num2);
		
		if(num2 > 10) {
			printf("soma %d", num1 + num2);
		} else {
			printf("valor num2 deve ser maior que 10");
		}
	} else {
		printf("Valor num1 deve estar entre 1 e 5");
	}
	
}
