/*
	7)	Escreva um programa que leia o valor de 3 �ngulos de um tri�ngulo e escreva se o tri�ngulo
	 � Acut�ngulo, Ret�ngulo ou Obtus�ngulo. Sendo que: 
	-Tri�ngulo Ret�ngulo: possui um �ngulo reto. (igual a 90�)
	-Tri�ngulo Obtus�ngulo: possui um �ngulo obtuso. (maior que90�) 
	-Tri�ngulo Acut�ngulo: possui tr�s �ngulos agudos. (menor que 90�)
*/

#include<stdio.h>

main() {
	int angulo1, angulo2, angulo3;
	
	printf("Digite o angulo1: ");
	scanf("%d", &angulo1);
	
	printf("Digite o angulo2: ");
	scanf("%d", &angulo2);
	
	printf("Digite o angulo3: ");
	scanf("%d", &angulo3);
	
	if (angulo1 + angulo2 + angulo3 != 180) {
		printf("Nao sao angulos de um triangulo");
	} else {
		if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
			printf("Triangulo obtusangulo");
		} else {
			if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
				printf("Triangulo retangulo");
			} else {
				printf("Triangulo acutangulo");
			}
		}
	}
	
	
}
