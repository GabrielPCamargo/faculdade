/*
1) Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos
 de três e que se encontram no conjunto dos números de 1 até 500. 

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
