/*
6)	Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metros e 
cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos anos ser�o 
necess�rios para que Z� seja maior que Chico.

*/

#include<stdio.h>

main() {
	float chico = 1.5, crescimentoChico = 0.02, ze = 1.10, crescimentoZe = 0.03;
	int anos = 0;
	
	while(ze < chico) {
		ze += crescimentoZe;
		chico += crescimentoChico;
		anos++;
	}
	
	printf("Ira demorar %d anos para que ze (%.2f) seja maior que chico (%.2f)", anos, ze, chico);
}
