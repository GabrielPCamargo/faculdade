/*
	6)	Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é Equilátero,
	 Isósceles ou Escaleno. Sendo que: 
	-Triângulo Equilátero: possui os 3 lados iguais.
	-Triângulo Isóscele: possui 2 lados iguais. 
	-Triângulo Escaleno: possui 3 lados diferentes.
*/

#include<stdio.h>

main() {
	float lado1, lado2, lado3;
	
	printf("Digite o lado1: ");
	scanf("%f", &lado1);
	
	printf("Digite o lado2: ");
	scanf("%f", &lado2);
	
	printf("Digite o lado3: ");
	scanf("%f", &lado3);
	
	if(lado1 == lado2 && lado2 == lado3) {
		printf("Triangulo equilatero");
	} else {
		if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1) {
			printf("Triangulo isosceles");
		} else {
			printf("Triangulo escaleno");
		}
	}
}
