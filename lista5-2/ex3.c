/*
	Desenvolver um algoritmo que leia um número não determinado de valores 
	e calcule e escreva a média aritmética dos valores lidos, a quantidade 
	de valores positivos, a quantidade de valores negativos e o percentual 
	de valores negativos e positivos. 
*/

#include<stdio.h>

main() {
	float numero, soma = 0;
	int quantidade = 5, i = 0, qtdPositivo = 0, qtdNegativo = 0;
	
	while(i < quantidade) {
		printf("Escreva um numero: ");
		scanf("%f", &numero);
		
		soma += numero;
		if(numero > 0) {
			qtdPositivo++;
		} else {
			qtdNegativo++;
		}
		
		i++;
	}
	
	printf("A media aritmetica: %.2f\n", soma / quantidade);
	printf("A Quantidade de numeros positivos: %d\n", qtdPositivo);
	printf("A Quantidade de numeros negativo: %d\n", qtdNegativo);
	printf("A porcentagem de numeros positivos: %.2f\n", ((float)qtdPositivo / (float)quantidade) * 100 );
	printf("A porcentagem de numeros negativos: %.2f\n", ((float)qtdNegativo / (float)quantidade) * 100 );
}
