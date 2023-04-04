/*
	5) Um objeto, que se encontra inicialmente em repouso, é sujeito a uma força que lhe provoca
	 	uma aceleração a de valor constante. O espaço percorrido s por esse objeto num espaço de tempo
		t  é dado pela seguinte equação: s = (a * t²)/2
		Construa um programa que pergunte os valores da aceleração e do tempo e apresente, como resultado,
	 	o valor do espaço percorrido.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main() {
	float aceleracao, tempo;
	
	printf("Digite a aceleracao: ");
	scanf("%f", &aceleracao);
	printf("Digite o tempo(s): ");
	scanf("%f", &tempo);
	
	printf("O espaco percorrido foi de %gm\n", (aceleracao * pow(tempo, 2)) / 2);
	system("PAUSE");
}
