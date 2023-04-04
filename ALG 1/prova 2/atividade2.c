/*
    Uma pesquisa está sendo realizada para saber o perfil das pessoas que participam de shows 
    de música.  Para isso algumas perguntas são realizadas para possibilitar a geração de algumas
    informações. O programa será utilizado por um entrevistador que irá até a frente da casa de 
    shows ou do estádio onde está ocorrendo o evento e irá entrevistar as pessoas que estão na 
    fila aguardando a entrada. Não se sabe quantos serão as pessoas entrevistadas 
    (a quantidade de pessoas), por isso, utilize a estratégia de informar ZERO na idade da pessoa 
    para finalizar a coleta de dados da pesquisa e daí possibilitar gerar e mostrar os dados das 
    saídas esperadas. Portanto, no final da entrevista deseja-se saber a quantidade de pessoas 
    entrevistadas, a média das idades das pessoas entrevistadas que estão indo a primeira vez 
    em um show (isto é, nas perguntas o pesquisador deve perguntar se é o primeiro show que a 
    pessoa está indo ou não). A pesquisa também deseja saber qual o tipo de música que os 
    entrevistados mais gostam(informe o tipo de música mais votado naquele grupo de entrevistados). 
    Use para as músicas a seguinte legenda: 1 - pop, 2- rock, 3 - pagode e 4 - sertanejo. 
    Cada entrevistado deve responder apenas 1 tipo de música.

    Faz parte da avaliação a identificação dos dados de entrada necessários para o desenvolvimento 
    do programa e as validações necessárias para os dados de entrada.

    Faça a consitência de dados de entrada, tais como a idade, o tipo de música, etc.

    Use identação do código e o nome das funções e das variáveis devem seguir as boas práticas
    discutidas em aula.

    Observe: Obrigatoriamente utilize uma função para calcular a média e outra para imprimir 
    uma linha de * ao informar as saídas, como no exemplo:

****************

Quantidade de pessoas entrevistadas

*****************

média das idades das pessoas entrevistadas que estão indo a primeira vez em um show

*****************

qual o tipo de música que os entrevistados mais gostam

****************

*/

#include<stdio.h>
#include<stdlib.h>

float mediaIdade(int totalIdade, int totalEntrevistados) {
    return (float)totalIdade / (float)totalEntrevistados;
}

void imprimeLinha() {
    printf("***********\n");
}

int generoFavorito(int generoMusical[4]) {
    int maior = generoMusical[0], maisQueUm = 0;
    int indiceMaior = 0;
    for (int i = 1; i < 4; i++) {
        if(generoMusical[i] > maior) {
            maior = generoMusical[i];
            indiceMaior = i;
        }
    }

    printf("O Genero favorito foi o ");
    for(int i = 0; i < 5; i++) {
        if(generoMusical[i] == maior) {
            if(maisQueUm) printf("e ");
           printf("%d ", i + 1);
           maisQueUm = 1;
        }
    }
    printf("\n");
}

int main() {
    int idade, totalPrimeiroShow = 0, primeiroShow, generoMusical, totalEntrevistados = 0,
     totalIdade = 0, generos[4] = {0};

    do {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        if (idade != 0) {
            do {
                printf("Digite se esse e seu primeiro show(1) ou nao (0):");
                scanf("%d", &primeiroShow);
            } while (primeiroShow != 0 && primeiroShow != 1);

            if(primeiroShow) {
                totalPrimeiroShow++;
                totalIdade += idade;
            }

            do {
                printf("Digite o codigo do seu genero de musica favorita: ");
                scanf("%d", &generoMusical);
            } while (generoMusical < 1 || generoMusical > 4);        

            totalEntrevistados++;
            generos[generoMusical - 1] += 1;
        }
    } while (idade != 0);
    

    imprimeLinha();
    printf("Foram entrevistadas %d pessoas\n", totalEntrevistados);
    imprimeLinha();
    printf("Media dos que este e o primeiro show: %.2f\n", mediaIdade(totalIdade, totalPrimeiroShow));
    imprimeLinha();
    generoFavorito(generos);
    imprimeLinha();


}