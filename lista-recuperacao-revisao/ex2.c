/*
	Implementar um programa que calcula o desconto previdenciário de um funcionário.
	O programa de ve imprimir o valor do desconto proporcional ao salário informado na tela
	(que não poderá seer menor ou igual a zero). O cálculo do desconto segue a regra: o desconto
	deve ser de 11% do valor do salário, entretanto, o valor máximo de desconto é de R$318,20.
	Sendo assim, ou resultado do valor do desconto previdênciário deverá ser 11% sobre o salário ou 318,20.
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
