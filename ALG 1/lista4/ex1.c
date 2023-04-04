/*
	1)	Uma loja fornece 10% de desconto para funcion�rios e 5% de desconto para clientes vips.
	 	Fa�a um programa que calcule o valor total a ser pago por uma pessoa. O programa dever� ler
		o valor total da compra efetuada e um c�digo que identifique se o comprador � um cliente 
		comum (1), funcion�rio (2) ou vip (3).
*/

#include<stdio.h>

main() {
	float valorTotal;
	int codigoCliente;
	
	printf("Digite o valor total da compra: ");
	scanf("%f", &valorTotal);

	if (valorTotal > 0) {
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
		
		printf("O valor total da compra R$%.2f", valorTotal);
	} else {
		printf("O valor total da compra nao pode ser negativo");
	}
	
	
}
