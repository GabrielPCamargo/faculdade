/*
	Especificação: 3)	Escreva um programa que lê 3 valores e imprima o valor do maior
*/

#include<stdio.h>

main() {
	int num1, num2, num3;
	
	printf("Digite o valor do primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o valor do segundo numero: ");
	scanf("%d", &num2);
	printf("Digite o valor do terceiro numero: ");
	scanf("%d", &num3);
	
	if (num1 > num2){
		if(num1 > num3) {
			printf("num1 = %d e o maior valor", num1);
		} else {
			printf("num3 = %d e o maior valor", num3);
		}
	} else {
		if (num2 > num3) {
			printf("num2 = %d e o maior valor", num2);
		} else {
			printf("num3 = %d e o maior valor", num3);
		}
	}
}

