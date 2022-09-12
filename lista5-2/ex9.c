/*
9) Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma sequência em P.G. contendo 10 valores. 
*/

main() {
	int valorInicial, pg, razao, i = 0;
	
	printf("Digite um numero inicial: ");
	scanf("%d", &valorInicial);
	
	printf("Digite a razao da progressao: ");
	scanf("%d", &razao);
	
	pg = valorInicial;
	while(i < 10) {
		printf("%d\n", pg);
		pg *= razao;
		i++;
	}
	
}
