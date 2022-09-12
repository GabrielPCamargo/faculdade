/*
	Faça um programa que leia um conjunto não determinado de valores, 
	um de cada vez, e escreva para cada um dos valores lidos, o quadrado,
	 o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.

*/

#include<stdio.h>
#include<math.h>

main() {
	float num;
	
	printf("Digite um numero (negativo ou zero pra finalizar): ");
	scanf("%f", &num);
	
	while(num > 0) {
		printf("O quadrado desse numero e: %.2f\n", pow(num, 2));
		printf("O cubo desse numero e: %.2f\n", pow(num, 3));
		printf("a raiz quadrada desse numero e: %.2f\n", sqrt(num));
		printf("Digite um numero: ");
		scanf("%f", &num);
	}
}

