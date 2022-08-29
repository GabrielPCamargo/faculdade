/*
	7)	Escreva um programa que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo
	 é Acutângulo, Retângulo ou Obtusângulo. Sendo que: 
	-Triângulo Retângulo: possui um ângulo reto. (igual a 90º)
	-Triângulo Obtusângulo: possui um ângulo obtuso. (maior que90º) 
	-Triângulo Acutângulo: possui três ângulos agudos. (menor que 90º)
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
