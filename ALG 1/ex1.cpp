#include <stdio.h>

int age, yearsAHead;

main () {
	printf("Digite a idade atual: ");
	scanf("%d", &age);
	printf("Digite a quantidade de anos que deseja simular: ");
	scanf("%d", &yearsAHead);
	printf("Sua idade atual e %d e em %d anos voce tera %d anos de idade", age, yearsAHead, age + yearsAHead);
}
