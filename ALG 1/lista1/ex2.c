/*
	2)  Fazer um programa em C que pergunte um valor em graus Fahrenheit e imprime o  correspondente em graus Celsius usando a fórmula:
      C=(f-32.0) * (5.0/9.0).
 */
 
#include<stdio.h>

main() {
	float fahrenheit;
	printf("Digite o valor em graus Fahrenheit: ");
	scanf("%f", &fahrenheit);
	printf("%g fahrenheit equivalem a %.2g graus celcius", fahrenheit, (fahrenheit - 32) * (5.0/9.0));
}
