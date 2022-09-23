/*
	Um fazendeiro deseja saber qual o valor de um cabrito, porém o vendedor ao invés de informar o valor do animal,
	envia uma xarada para o fazendeiro, que para descobrir o valor de cada cabrito terá que resolver o desafio:
	
	- 1 Vaca custa R$500
	- 1 Vaca equivale ao valor de 10 coelhos
	- 3 coelhos equivalem ao valor de 5 galinhas
	- 25 galinhas equivalem ao valor de 2 cabritos
	
	O fazendeiro, então resolveu desenvolver um programa em C para resolver a xarada. A saída do programa será o valor de um cabrito.
	galinha = coelho * 3 / 5
*/

#include<stdio.h>

main() {
	float vaca = 500, coelho, galinha, cabrito;
	
	coelho = vaca / 10;
	galinha = coelho / ((float)5/3);
	cabrito = galinha / ((float)2/25);
	
	printf("O valor da vaca: %f, coelho: %f, galinha: %f, cabrito: %f", vaca, coelho, galinha, cabrito);
}

