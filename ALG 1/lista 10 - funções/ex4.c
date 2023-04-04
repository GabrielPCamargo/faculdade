/*
    4)	Fa�a um programa que implementa uma fun��o que recebe, por par�metro, a hora de in�cio e a hora de
	 t�rmino de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O procedimento deve retornar,
	  tamb�m por par�metro, a dura��o do jogo em horas e minutos, considerando que o tempo m�ximo de dura��o de um
	   jogo � de 24 horas e que o jogo pode come�ar em um dia e terminar no outro.
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
