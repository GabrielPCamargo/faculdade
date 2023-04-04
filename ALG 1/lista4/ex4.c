/*
	4)	Dado o valor do produto e a forma de pagamento.
	1= à vista;
	2= à prazo.
	
	Se o produto for pago à vista aplique um desconto de 10% antes de mostrar o valor final, senão informe o mesmo valor do produto.

*/

#include<stdio.h>

main() {
	float valorProduto;
	int formaPagamento;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valorProduto);
	
	if(valorProduto > 0) {
		printf("Digite a forma de pagamento: ");
		scanf("%d", &formaPagamento);
		
		switch (formaPagamento) {
			case 1:
				printf("Pagamento a vista\n");
				printf("Valor total a ser pago R$%g", valorProduto * 0.9);
				break;
			case 2:
				printf("pagamento a prazo\n");
				printf("valor total a ser pago %g", valorProduto);
		}
	} else {
		printf("Valor do produto tem que ser maior que zero");
	}
	
	
}
