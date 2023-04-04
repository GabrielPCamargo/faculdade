/*
	Uma crian�a possui um cofre com moedas e deseja saber se ter� dinheiro suficiente para comprar um pacote
	de pirulitos. Para isso ser� desenvolvido um programa para informar se existe dinheiro suficiente no cofre.
	O seu programa dever� solicitar as seguintes informa��es:
	Quantidade de moedas de 0,05; 0,10; 0,25; 0,50; 1,00.
	
	Solicite o valor do produto a ser comprado e informe via mensagem se existe dinheiro suficiente ou se n�o
	existe moedas suficiente e quanto do valor est� faltando.
*/

#include<stdio.h>

main() {
	
	//Criar somente uma vari�vel
	int cincoCentavos, dezCentavos, vinteCincoCentavos, cinquentaCentavos, umReal;
	float preco, valorTotalMoedas;
	
	//N�o esquecer que n�o pode ter n�mero negativo em quantidade;
	do {
		printf("Digite o numero de moedas de R$0,05: ");
		scanf("%d", &cincoCentavos);
	} while(cincoCentavos < 0);
	
	do {
		printf("Digite o numero de moedas de R$0,10: ");
		scanf("%d", &dezCentavos);
	} while (dezCentavos < 0);
	
	do {
		printf("Digite o numero de moedas de R$0,25: ");
		scanf("%d", &vinteCincoCentavos);
	} while (vinteCincoCentavos < 0);
	
	do {
		printf("Digite o numero de moedas de R$0,50: ");
		scanf("%d", &cinquentaCentavos);
	} while (cinquentaCentavos < 0);
	
	do {
		printf("Digite o numero de moedas de R$1,00: ");
		scanf("%d", &umReal);	
	} while (umReal < 0);
	
	
	printf("Digite o valor do pacote de pirulitos: ");
	scanf("%f", &preco);
	
	while(preco < 0) {
		printf("Valor invalido, digite o valor do pacote de pirulitos: ");
		scanf("%f", &preco);
	}
	
	valorTotalMoedas = 0;
	valorTotalMoedas += cincoCentavos * 0.05;
	valorTotalMoedas += dezCentavos * 0.1;
	valorTotalMoedas += vinteCincoCentavos * 0.25;
	valorTotalMoedas += cinquentaCentavos * 0.5;
	valorTotalMoedas += umReal * 1.0;

	if(valorTotalMoedas >= preco) {
		printf("Existe valor suficiente para comprar o pacote de pirulitos");
	} else {
		printf("Nao existe valor suficiente, faltam R$%.2f", preco - valorTotalMoedas);
	}
}
