/*
	3)	Fa�a um programa que calcule a �rea de um tri�ngulo, 
	cuja base e altura s�o fornecidas pelo usu�rio. 
	Esse programa n�o pode permitir a entrada de dados inv�lidos, ou seja, medidas menores ou iguais a 0.
*/

#include<stdio.h>

main() {
	float base = 0, altura = 0, area;
	
	while (base <= 0) {
		printf("Digite o tamanho da base triangulo: ");
		scanf("%f", &base);
	}
	
	while (altura <= 0) {
		printf("Digite o tamanho da altura do triangulo: ");
		scanf("%f", &altura);
	}
	
	printf("A area do triangulo e de: %.2f", (base * altura) / 2);
}
