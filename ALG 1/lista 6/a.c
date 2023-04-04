Lista Exercícios Vetores
•	Faça um programa que lê valores inteiros maiores que 10 em um vetor de 7 posições. Posteriormente crie um outro vetor com os elementos ímpares do vetor original. Ao final do programa imprima os dois vetores criados.
#include <stdio.h>
#define TAM 7

int main()
{
    int valor_int[TAM], valor_impar[TAM], i, cont = 0;
    for(i = 0; i < TAM; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor_int[i]);
        while(valor_int[i] < 10)
        {
            printf("Digite o valor %d: ", i + 1);
            scanf("%d", &valor_int[i]);
        }
    }
    for(i = 0; i < TAM; i++)
    {
        if(valor_int[i] % 2 == 1)
        {
            valor_impar[cont] = valor_int[i];
            cont++;
        }
    }
    for(i = 0; i < cont; i++)
    {
        printf("%d ", valor_impar[i]);
    }
}
•	Um fazendeiro deseja controlar o peso de seu pequeno rebanho de cabras, assim ele irá por 3 meses pesar cada um de seus 10 animais e registar o peso de cada um. Você irá criar um programa que possibilite estes registros mensais para as 10 cabras. O programa irá mostrar para cada animal a perda ou ganho de pesos nos três meses e identificar em qual mês o animal teve o maior peso. Informe, também, o peso total do rebanho no último mês e o valor da diferença entre o primeiro mês e o último mês do registro. 
#include <stdio.h>
#define TAM 3

int main()
{
    int i;
    float animal_mes1[TAM], animal_mes2[TAM], animal_mes3[TAM], peso_total = 0, peso_mes1 = 0;
    
    for(i = 0; i < TAM; i++)
    {
        printf("Digite o peso do animal %d no mes 1: ", i + 1);
        scanf("%f", &animal_mes1[i]);
        while(animal_mes1[i] <= 0)
        {
            printf("Digite o peso do animal %d no mes 1: ", i + 1);
            scanf("%f", &animal_mes1[i]);
        }
    }
    
    for(i = 0; i < TAM; i++)
    {
        printf("Digite o peso do animal %d no mes 2: ", i + 1);
        scanf("%f", &animal_mes2[i]);
        while(animal_mes2[i] <= 0)
        {
            printf("Digite o peso do animal %d no mes 2: ", i + 1);
            scanf("%f", &animal_mes2[i]);
        }
    }
    
    for(i = 0; i < TAM; i++)
    {
        printf("Digite o peso do animal %d no mes 3: ", i + 1);
        scanf("%f", &animal_mes3[i]);
        while(animal_mes3[i] <= 0)
        {
            printf("Digite o peso do animal %d no mes 3: ", i + 1);
            scanf("%f", &animal_mes3[i]);
        }
    }
    
    for(i = 0; i < TAM; i++)
    {
        if(animal_mes1[i] > animal_mes3[i])
        {
            printf("\nO animal %d perdeu %fkg entre os 3 meses", i + 1, (animal_mes1[i] - animal_mes3[i]));
            
            if(animal_mes1[i] > animal_mes2[i])
            {
                printf("\nO maior peso do animal %d foi no mes 1, com %f kg", i + 1, animal_mes1[i]);
            }
            else
            {
                if(animal_mes1[i] > animal_mes2[i])
                {
                    printf("\nO maior peso do animal %d foi no mes 2, com %f kg", i + 1, animal_mes2[i]);
                }
                else
                {
                    printf("\nO animal %d teve o peso maior nos meses 1 e 2, com %fkg", i + 1, animal_mes1[i]);
                }
            }
        }
        else
        {
            if(animal_mes1[i] < animal_mes3[i])
            {
                printf("\nO animal %d ganhou %fkg entre os 3 meses", i + 1, (animal_mes3[i] - animal_mes1[i]));
                
                if(animal_mes3[i] > animal_mes2[i])
                {
                    printf("\nO maior peso do animal %d foi no mes 3, com %f kg", i + 1, animal_mes3[i]);
                }
                else
                {
                    if(animal_mes3[i] < animal_mes2[i])
                    {
                        printf("\nO maior peso do animal %d foi no mes 2, com %f kg", i + 1, animal_mes2[i]);
                    }
                    else
                    {
                        printf("\nO animal %d teve o maior peso nos meses 2 e 3, com %f kg", i + 1, animal_mes3[i]);
                    }
                }
            }
            else
            {
                printf("\nO animal %d manteve o peso de %fkg nos 3 meses", i + 1, animal_mes1[i]);
                
                if(animal_mes3[i] > animal_mes2[i])
                {
                    printf("\nO maior peso do animal %d foi nos meses 1 e 3, com %f kg", i + 1, animal_mes3[i]);
                }
                else
                {
                    if(animal_mes3[i] < animal_mes2[i])
                    {
                        printf("\nO maior peso do animal %d foi no mes 2, com %f kg", i + 1, animal_mes2[i]);
                    }
                }
            }
        }
        peso_total = peso_total + animal_mes3[i];
        peso_mes1 = peso_mes1 + animal_mes1[i];
    }
    
    printf("\nO peso total do rebanho no mes 3 foi de %f kg, com uma diferença de %f kg do primeiro mes", peso_total, peso_total-peso_mes1);
}
•	Faça um programa que armazena valores de salários dos últimos 5 meses de um funcionário. O funcionário pode receber a mais de um mês para outro maior, mas nunca menos. Informe ao final se o funcionário recebeu algum aumento e em que mês. Calcule o valor total recebido nos 5 meses.
#include <stdio.h>
#define TAM 5

int main()
{
    int i;
    float salario[TAM], valor_total = 0;

    for(i = 0; i < TAM; i++)
    {
        printf("Digite o salario do mes %d: R$", i + 1);
        scanf("%f", &salario[i]);
        while(salario[i] <= 0)
        {
            printf("Digite o salario do mes %d: R$", i + 1);
            scanf("%f", &salario[i]);
        }
        if(i != 0)
        {
            while(salario[i] < salario[i - 1])
            {
                printf("Digite o salario do mes %d: R$", i + 1);
                scanf("%f", &salario[i]);
            }
            
        }
        valor_total = valor_total + salario[i];
    }
    for(i = 1; i < TAM; i++)
    {
        if(salario[i] > salario[i - 1])
        {
            printf("\nHouve um aumento de R$%.2f no mes %d", salario[i] - salario[i - 1], i + 1);
        }
    }
    printf("\nValor total recebido nos 5 meses: R$%.2f", valor_total);
}
