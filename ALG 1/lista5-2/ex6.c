/*
	6) Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200. 
*/

#include<stdio.h>

main() {
	int i = 100;
	
	while(i < 200) {
		if(i % 2 == 1) {
			printf("%d\n", i);
		}
		i++;
	}
}
