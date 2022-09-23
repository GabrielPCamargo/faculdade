/*
	Um sacolão está realizando promoções nas frutas vendidas. Para o cliente ter descontos
	deverá seguir algumas regras. No caixa do sacolão será utilizado o programa que você irá
	desenvolver. No programa aparecerá um menu para a seleção de fruta a ser comprada:
	
	1 - Maça
	2 - Laranja
	3 - Lima
	4 - Abacaxi
	
	O caixa do sacolão sleciona a fruta e informa a quantidade que está sendo comprada, assim como o valor da unidade.
	A promoção ocorrerá na seguinte situação:
	
	-Na compra de maçãs, se o clinete estiver comprando mais de 10 unidades terá desconto de &% no valor unitário.
	-Na compra de larajas o desconto será de 2% na unidade para compras de 5 até 10 unidades e de 5% quando comprar mais de 10 unidades
	-Na compra e Limas ou abacaxis terá 20% de deconto na unidade, se as compras forem superiores a 7 unidades.
	cada cliente compra apenas um tipo de fruta por vez.
	
	Informe o tipo de fruta comprada, a quantidade, o valor unitário a ser pago pelo cliente e o valor total a ser pago pelo cliente.
*/

#include<stdio.h>

main() {
	int tipoFruta, quantidade;
	float precoFruta;
	
	printf("Codigo | fruta\n");
	printf("   1   | Maça\n");
	printf("   2   | Laranja\n");
	printf("   3   | Lima\n");
	printf("   4   | Abacaxi\n");
	
	printf("Digite a fruta a ser comprada: ");
	scanf("%d", &tipoFruta);
	
	while(tipoFruta < 1 && tipoFruta > 4) {
		printf("Tipo de fruta invalido, digite novamente: ");
		scanf("%d", &tipoFruta);
	}
	
	printf("Digite a quantidade de frutas comprada: ");
	scanf("%d", &quantidade);
	
	while(quantidade < 1) {
		printf("Quantidade invalida, digite novamente: ");
		scanf("%d", &quantidade);
	}
	
	do {
		printf("Digite o valor da fruta: ");
		scanf("%f", &precoFruta);
	} while (precoFruta < 0);
	
	switch(tipoFruta) {
		case 1: {
			if(quantidade > 10) precoFruta *= 0.93;
			break;
		}
		case 2: {
			if(quantidade > 5 && quantidade < 10) {
				precoFruta *= 0.98;
			} else {
				if (quantidade > 10) precoFruta *= 0.95;
			}
			break;
		}
		case 3:
		case 4: {
			if(quantidade > 7) precoFruta *= 0.8;
			break;
		}
	}
	
	
	printf("Tipo de fruta %d, quantidade: %d, Preco da fruta com desconto: %f, total: %f", tipoFruta, quantidade, precoFruta, precoFruta * quantidade);
}
