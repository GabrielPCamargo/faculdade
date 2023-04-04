/*
    4)	Faça um programa que implementa uma função que recebe, por parâmetro, a hora de início e a hora de
	 término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O procedimento deve retornar,
	  também por parâmetro, a duração do jogo em horas e minutos, considerando que o tempo máximo de duração de um
	   jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
*/

#include <stdio.h>

float tempoJogo(int hInicio, int hFinal) {
    int duracaoPartida;
    
    if(hInicio > hFinal) {
    	duracaoPartida = 24 - hInicio;
    	duracaoPartida += hFinal;
	} else {
		duracaoPartida = hFinal - hInicio;
	}
    
    if(duracaoPartida > 24) {
    	printf("Tempo invalido: maior que 24h");
    	duracaoPartida = 24;
	}

    return duracaoPartida;
}

int main() {
	int hInicial, hFinal, tempo;
	
	printf("Digite a hora inicial do jogo: ");
	scanf("%d", &hInicial);
	
	printf("Digite a hora final do jogo: ");
	scanf("%d", &hFinal);
	
	tempo = tempoJogo(hInicial, hFinal);
	
	printf("Tempo da partida: %d", tempo);
	
    return 0;
}
