/*
2)	Escreva um programa que leia o número de habitantes de uma determinada cidade, 
o valor do kwh e, para cada habitante, entre com os dados: consumo do mês e o código do consumidor 
(1: residencial, 2: comercial, 3: industrial). No nal, imprima o maior, o menor e a média de consumo
 dos habitantes e, por m, o total de consumo de cada categoria de consumidor.
*/

#include<stdio.h>

main() {
	int habitantes = -1, i, codigo;
	float precoKwh = 0, consumoMes = -1, menorConsumo = 0,
	maiorConsumo = 0, totalConsumo = 0, consumoResidencial = 0, consumoComercial = 0, consumoIndustrial = 0;
	
	while(habitantes < 0) {
		printf("Digite o numero de habitantes: ");
		scanf("%d", &habitantes);
	}
	
	while(precoKwh <= 0) {
		printf("Digite o preco do Kwh: ");
		scanf("%f", &precoKwh);
	}
	
	i = 0;
	while(i < habitantes) {
		consumoMes = -1;
		codigo = 0;
		while (consumoMes < 0) {
			printf("Digite o consumo do mes: ");
			scanf("%f", &consumoMes);
		}
		while (codigo < 1 || codigo > 3) {
			printf("Digite o codigo do consumidor (1 - Residencial, 2 - Comercial, 3 - Industrial):");
			scanf("%d", &codigo);
		}
		
		if (consumoMes < menorConsumo || i == 0) menorConsumo = consumoMes;
		if (consumoMes > maiorConsumo || i == 0) maiorConsumo = consumoMes;
		
		switch (codigo) {
			case 1: consumoResidencial += consumoMes; break;
			case 2: consumoComercial += consumoMes; break;
			default: consumoIndustrial += consumoMes; break;
		}
		
		totalConsumo += consumoMes;
		i++;
		
	}
	
	printf("O menor consumo foi de %.2f\n", menorConsumo);
	printf("O maior consumo foi de %.2f\n", maiorConsumo);
	printf("A media do consumo foi de %.2f\n", totalConsumo / habitantes);
	printf("O total de consumo residencial foi de %.2f\n", consumoResidencial);
	printf("O total de consumo comercial foi de %.2f\n", consumoComercial);
	printf("O total de consumo Industrial foi de %.2f\n", consumoIndustrial);
}


