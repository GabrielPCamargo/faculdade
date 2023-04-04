/*
	6)	Escreva um programa que leia as medidas dos lados de um tri�ngulo e escreva se ele � Equil�tero,
	 Is�sceles ou Escaleno. Sendo que: 
	-Tri�ngulo Equil�tero: possui os 3 lados iguais.
	-Tri�ngulo Is�scele: possui 2 lados iguais. 
	-Tri�ngulo Escaleno: possui 3 lados diferentes.
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
