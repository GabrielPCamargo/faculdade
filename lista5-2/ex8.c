/*
8) Escreva um algoritmo que leia um valor inicial A e uma raz�o R e imprima uma sequ�ncia em P.A. contendo 10 valores. 

*/

main() {
	int valorInicial, pa, razao, i = 0;
	
	printf("Digite um numero inicial: ");
	scanf("%d", &valorInicial);
	
	printf("Digite a razao da progressao: ");
	scanf("%d", &razao);
	
	pa = valorInicial;
	while(i < 10) {
		printf("%d\n", pa);
		pa += razao;
		i++;
	}
	
}
