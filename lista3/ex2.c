/*
	Especificação: 2)	Laranjas custam R$ 0,30 cada se forem compradas menos do que uma dúzia, 
	e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que leia o número de 
	laranjas compradas, calcule e escreva o valor total da compra
*/

#include<stdio.h>

main() {
	int laranjasCompradas;
	float precoLaranja;
	printf("Digite o numero de laranjas compradas: ");
	scanf("%d", &laranjasCompradas);
	
	if (laranjasCompradas >= 12) {
		precoLaranja = 0.25;
	} else {
		precoLaranja = 0.30;
	}
	
	printf("Foram compradas %d laranjas e total da compra = R$%.2f", laranjasCompradas, laranjasCompradas * precoLaranja);
}
