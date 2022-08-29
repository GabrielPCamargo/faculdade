/*
	3)	A taxa de natalidade e a taxa de mortalidade s�o indicadores estat�sticos de fundamental 
	import�ncia por ajudar a compreender aquilo que os especialistas chamam de din�mica populacional 
	e a entender sua rela��o com vari�veis que influenciam o desenvolvimento, como qualidade de vida, 
	migra��es, , fatores socioecon�micos e localiza��o. Sabendo disso, crie um programa que calcule 
	os dois indicadores utilizando o comando switch.

Observa��o : A taxa de natalidade � calculada pela seguinte f�rmula: 
taxa de natalidade = (n�mero de crian�as nascidas x 1000) / n�mero de habitantes;

Enquanto que, a taxa de mortalidade = (n�meros de �bitos x 1000) /n�mero de habitantes.

*/

#include<stdio.h>

main() {
	int numeroHabitantes, numeroCriancasNascidas, numeroObitos;
	
	printf("Digite o numero de habitantes: ");
	scanf("%d", &numeroHabitantes);
	
	if (numeroHabitantes > 0) {
		printf("Digite o numero de criancas nascidas: ");
		scanf("%d", &numeroCriancasNascidas);
		
		printf("Digite o numero de obitos: ");
		scanf("%d", &numeroObitos);
		
		if(numeroCriancasNascidas > 0 && numeroObitos > 0) {
			printf("A taxa de natalidade e de %g a cada 1000 habitantes \n", ((float)numeroCriancasNascidas * 1000) / numeroHabitantes);
			printf("A taxa de mortalidade e de %g a cada 1000 habitantes", ((float)numeroObitos * 1000) / numeroHabitantes);
		} else {
			printf("Criancas nascidas e obitos nao podem ser negativos");
		}
	} else {
		printf("Numero de habitantes nao pode ser zero");
	}
}
