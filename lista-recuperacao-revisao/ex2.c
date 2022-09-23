/*
	Implementar um programa que calcula o desconto previdenci�rio de um funcion�rio.
	O programa de ve imprimir o valor do desconto proporcional ao sal�rio informado na tela
	(que n�o poder� seer menor ou igual a zero). O c�lculo do desconto segue a regra: o desconto
	deve ser de 11% do valor do sal�rio, entretanto, o valor m�ximo de desconto � de R$318,20.
	Sendo assim, ou resultado do valor do desconto previd�nci�rio dever� ser 11% sobre o sal�rio ou 318,20.
*/

#include<stdio.h>

main() {
	float salario;
	do {
		printf("Digite o valor do salario: ");
		scanf("%f", &salario);
	} while (salario <= 0);
	
	if ((salario * 0.11) < 318.20) {
		printf("Desconto previdenciario de: %.2f", salario * 0.11);
	} else {
		printf("Desconto previdenciario maximo: %f", 318.20);
	}
}
