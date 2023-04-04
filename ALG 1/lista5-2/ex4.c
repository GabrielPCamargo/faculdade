/*
4) Escrever um algoritmo que leia uma quantidade desconhecida de números e 
conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75]
 e [76-100]. A entrada de dados deve terminar quando for lido um número negativo.
	
*/

#include<stdio.h>

main() {
	int numero = 0, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
	
	while(numero >= 0) {
		printf("Digite um numero entre 0 e 100: ");
		scanf("%d", &numero);
		
		if (numero >= 0 && numero <= 25) {
			intervalo1++;
		} else {
			if(numero >= 26 && numero <= 50) {
				intervalo2++;
			} else {
				if (numero >= 51 && numero <= 75) {
					intervalo3++;
				} else {
					if (numero >= 76 && numero <= 100) {
						intervalo4++;
					}
				}
			}
		}
		
	}
	
	printf("Foram digitados %d valores no intervalo [0,25]\n", intervalo1);
	printf("Foram digitados %d valores no intervalo [26,50]\n", intervalo2);
	printf("Foram digitados %d valores no intervalo [51,75]\n", intervalo3);
	printf("Foram digitados %d valores no intervalo [76,100]\n", intervalo4);
}

