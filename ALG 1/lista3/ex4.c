/*
	4)	Escreva um programa que lei 2 valores e informe se são iguais.
*/

#include<stdio.h>

main() {
	int num1, num2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digite o segundo valor: ");
	scanf("%d", &num2);
	
	if (num1 == num2) {
		printf("Valores sao iguais");
	} else {
		printf("Valores sao diferentes");
	}
}

