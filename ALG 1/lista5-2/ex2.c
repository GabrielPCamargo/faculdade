/*
	2) Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar: 
 a. A menor altura do grupo; 
b. A maior altura do grupo; 


*/


#include<stdio.h>

main() {
	int pessoas = 15, i = 0;
	float altura, menorAltura, maiorAltura;
	
	while(i < pessoas) {
		altura = 0;
		while(altura <= 0) {
			printf("Digite a altura: ");
			scanf("%f", &altura);
		}
		
		if(altura > maiorAltura || i == 0) maiorAltura = altura;
		if(altura < menorAltura || i == 0) menorAltura = altura;
		i++;
	}
	
	printf("A menor altura do grupo: %g\n", menorAltura);
	printf("A maior altura do grupo: %g", maiorAltura);
}
