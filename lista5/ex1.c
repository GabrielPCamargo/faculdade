/*
1)	Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado 
daquele tamanho com asteriscos e espaços em branco. Seu programa deve funcionar para quadrados com 
lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:

*****
*    *
*    *
*    *
*****


*/

#include<stdio.h>

main() {
	int tamanhoQuadrado, i, j;
	
	printf("Digite o tamanho do quadrado (1 a 20): ");
	scanf("%d", &tamanhoQuadrado);
	
	while(tamanhoQuadrado < 1 || tamanhoQuadrado > 20) {
		printf("Digite o tamanho do quadrado (1 a 20): ");
		scanf("%d", &tamanhoQuadrado);
	}
	
	i = 0;
	
	while(i < tamanhoQuadrado) {
		j = 0;
		while(j < tamanhoQuadrado) {
			if (i > 0 && i < (tamanhoQuadrado - 1) && j > 0 && j < (tamanhoQuadrado - 1)){
				printf(" ");
			} else {
				printf("*");
			}
			j++;
		}
		printf("\n");
		i++;
	}
}
