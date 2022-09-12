/*
5)	Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. 
Em 1996 recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem 
ao dobro do ano anterior. Faça programa que determine o salário atual do funcionário.
*/

#include<stdio.h>

main() {
	float salario = 2000, aumento = 0;
	int anoInicial = 1995, anoAtual = 2022, i = anoInicial + 1;
	
	printf("No ano %d, o salario e de %.2f e o aumento de %.3f\n", anoInicial, salario, aumento);
	aumento = salario * 0.015;
	
	while (i <= anoAtual) {
		salario = salario + aumento;
		printf("No ano %d, o salario e de %.2f e o aumento de %.2f\n", i, salario, aumento);
		aumento *= 2;
		i++;
	}
}

