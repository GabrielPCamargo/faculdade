/*
	Avalia��o: nome de variavel, tipo errado, declarar vari�vel a mais, l�gica, ela n�o compila,

	Elabore um programa que solicita o total gasto de um cliente de uma loja e imrpime as op��es de pagamento.
	Solicita a op��o desejada e imprime o valor total das presta��es (se houverem).
	1 - Op��o: a vista com 10% de desconto
	2 - Op��o: em duas vezes (pre�o da etiqueta)
	3 - Op��o: de 3 at� 10 vezes com 3% de juros ao m�s (somente para compras acima de R$100).
*/

#include<stdio.h>

main() {
	
	float totalCompra;
	int opcao;
	
	do {
		printf("Digite o valor da sua compra");
		scanf("%f", &totalCompra);
	} while (totalCompra <= 0);
	
	printf("1 - a vista com 10 por cento de desconto\n");
	printf("2 - em duas vezes (preco da etiqueta)\n");
	printf("3 - de 3 ate 10 vezes com 3 por cento de juros ao mes\n");
	
	do {
		printf("Digite a opcao que voce deseja:\n");
		scanf("%d", &opcao);
	} while (opcao < 1 || opcao > 3);
	
	switch(opcao) {
		case 1: {
			printf("Selecionado a vista, total a pagar: %.2f", totalCompra * 0.9);
			break;
		}
		case 2: {
			printf("Selecionado duas vezes, valor por parcela: %.2f", totalCompra / 2);
			break;
		}
		default: {
			int parcelas, i;
			float valorParcela, valorTotalParcelado;
			printf("Selecionado de 3 ate 10 vezes com 3 por cento de juros");
			if (totalCompra > 100) {
				do {
					printf("Digite o numero de parcelas: ");
					scanf("%d", &parcelas);
				} while (parcelas < 3 || parcelas > 10);
				
				valorParcela = totalCompra / parcelas;
				valorTotalParcelado = 0;
				for(i = 1; i <= parcelas; i++) {
					valorParcela *= 1.03;
					printf("Parcela %d: R$%.2f\n", i, valorParcela);
					valorTotalParcelado += valorParcela;
				}
				
				printf("Valor total: %.2f", valorTotalParcelado);
				
				break;
			} else {
				printf("Nao e possivel parcelar valor menor que 100");
			}
			
		}
	}
}
