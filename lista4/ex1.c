/*
	1)	Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips.
	 	Faça um programa que calcule o valor total a ser pago por uma pessoa. O programa deverá ler
		o valor total da compra efetuada e um código que identifique se o comprador é um cliente 
		comum (1), funcionário (2) ou vip (3).
*/

#include<stdio.h>

main() {
	float valorTotal;
	int codigoCliente;
	
	printf("Digite o valor total da compra: ");
	scanf("%f", &valorTotal);
	
	printf("Digite o codigo de indentificacao: ");
	scanf("%d", &codigoCliente);
	
	switch(codigoCliente) {
		case 1:
			break;
		case 2:
			valorTotal *= 0.9;
			break;
		case 3:
			valorTotal *= 0.95; 
			break;
		default:
			printf("Codigo de cliente invalido, considerado cliente normal\n");
	}
	
	printf("O valor total da compra R$%g", valorTotal);
}
