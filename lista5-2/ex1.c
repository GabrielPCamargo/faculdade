/*
1) Desenvolver um algoritmo que efetue a soma de todos os n�meros �mpares que s�o m�ltiplos
 de tr�s e que se encontram no conjunto dos n�meros de 1 at� 500. 

*/

#include<stdio.h>

main() {
	int i = 0, total = 0;
	while(i <= 500) {
		if(i % 2 == 1 && i % 3 == 0) total += i;
		i++;
	}
	
	printf("O total da soma dos numeros impares e multiplos de 3 entre 1 e 500 e: %d", total);
}
