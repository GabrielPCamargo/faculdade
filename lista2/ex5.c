/*
	5) Um objeto, que se encontra inicialmente em repouso, � sujeito a uma for�a que lhe provoca
	 	uma acelera��o a de valor constante. O espa�o percorrido s por esse objeto num espa�o de tempo
		t  � dado pela seguinte equa��o: s = (a * t�)/2
		Construa um programa que pergunte os valores da acelera��o e do tempo e apresente, como resultado,
	 	o valor do espa�o percorrido.
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
