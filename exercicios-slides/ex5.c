#include<stdio.h>
#include<math.h>

main() {
	int num;
	float primeiraAp, segundaAp, anteriorAp;
	do {
		printf("Digite um numero para saber raiz quadrada: ");
		scanf("%d", &num);
	} while (num <= 0);
	
	primeiraAp = (float)num/2;
	printf("Primeira aproximacao: %g\n", primeiraAp);
	segundaAp = primeiraAp;
	
	do {
		anteriorAp = segundaAp;
		segundaAp = anteriorAp - (((anteriorAp * anteriorAp) - num)/ (2 * anteriorAp) );
		printf("segunda aproximacao: %f\n", segundaAp);
	} while (fabs(segundaAp - anteriorAp) > 0.0000000001);
	
}
