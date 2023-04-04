/*
    3)	Faça um programa que implemente uma função que recebe a idade de um nadador por 
    parâmetro e retorna, também por parâmetro, a categoria desse nadador de acordo com a
     tabela abaixo:  
     =============================
        Idade	Categoria
        5 a 7 anos	Infantil A
        8 a 10 anos	Infantil B
        11-13 anos	Juvenil A
        14-17 anos	Juvenil B
        Maiores de 18 anos (inclusive)	Adulto

*/

#include <stdio.h>
#include <string.h>

void categoriaNadador(int idade) {
    if(idade >= 5) {
        if(idade >= 5 && idade <= 7) {
            printf("Categoria: Infantil A\n");
        } else {
            if(idade >= 8 && idade <= 10) {
                printf("Categoria: Infantil B\n");
            } else {
                if (idade >= 11 && idade <= 13) {
                    printf("Categoria: Juvenil A\n");
                } else {
                    if (idade >= 14 && idade <= 17) {
                        printf("Categoria: Juvenil B");
                    } else {
                        printf("Categoria: Adulto");
                    }
                }
            }
        }
    } else {
        printf("Nadador menor de 5 anos\n");
        printf("Categoria: indefinida\n");
    }
    
}

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    categoriaNadador(idade);

    return 0;
}