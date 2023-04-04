/*
	Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em centímetros e milímetros.
*/

#include<stdio.h>

main() {
	float meters;
	
	printf("Digite o valor em metros: ");
	scanf("%f", &meters);
	printf("Valor em metros: %g\n", meters);
	printf("Valor em centimetros: %g\n", (meters * 100));
	printf("Valor em milimetros: %g\n", meters * 1000);
}

