/*
	Fa�a um algoritmo estruturado que leia uma quantidade n�o determinada de n�meros positivos.
	 Calcule a quantidade de n�meros pares e �mpares, a m�dia de valores pares e a m�dia geral dos n�meros lidos.
	  O n�mero que encerrar� a leitura ser� zero.
*/

#include<stdio.h>

main() {
	int numero, qtdNumeros = 0, qtdPares = 0, qtdImpares = 0, somaPares = 0, soma = 0;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &numero);
	
	while(numero != 0) {
		
		if(numero > 0) {
			if(numero % 2 == 0) {
				qtdPares++;
				somaPares += numero;
			} else {
				qtdImpares++;
			}
			
			qtdNumeros++;
			soma += numero;
		}
		
		printf("Digite um numero positivo: ");
		scanf("%d", &numero);
	}
	
	printf("Foram digitados %d numeros pares\n", qtdPares);
	printf("Foram digitados %d numeros impares\n", qtdImpares);
	if(qtdPares) {
		printf("Media %g dos numeros pares\n", (float)somaPares / (float)qtdPares);
	} 	
	printf("Media total: %g\n", (float)soma / (float)qtdNumeros);
}
