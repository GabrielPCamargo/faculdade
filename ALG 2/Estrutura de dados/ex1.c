#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int value;
    struct no *next;
} nodo;

void addListEnd(nodo **list, int value)
{
    nodo *nextMember;
    nodo *newMember = (nodo*) malloc(sizeof(nodo));
    
    if (newMember != NULL)
    {
        newMember->value = value;
        newMember->next = NULL;

        if (*list == NULL)
        {
            *list = newMember;
        }
        else
        {
            nextMember = (*list)->next;
            if(nextMember != NULL) {
                while(nextMember->next != NULL) {
                    nextMember = nextMember->next;
                }
                nextMember->next = newMember;
            } else {
                (*list)->next = newMember;
            }
        }
    }
    else
    {
        printf("Nao ha memoria!");
    }
    printf("\n Valor armazenado na lista %d\n", newMember->value);
}

void addListBeginning(nodo **list, int value)
{
    nodo *nextMember;
    nodo *newMember = (nodo*) malloc(sizeof(nodo));
    
    if (newMember != NULL)
    {
        newMember->value = value;
        newMember->next = *list;

        *list = newMember;
    }
    else
    {
        printf("Nao ha memoria!");
    }
    printf("\n Valor armazenado na lista %d\n", newMember->value);
}

void removeItemBeginning(nodo **list)
{
    nodo *nodoToRemove = *list;
    if(*list != NULL) {
        *list = (*list)->next;
        free(nodoToRemove);
        printf("Valor removido no inicio!\n");
    }
}

void removeItemEnd(nodo **list) {
    nodo *lastItem = *list, *beforeLastItem = *list;

    if(lastItem != NULL) {
        while (lastItem->next != NULL) {
            lastItem = lastItem->next;
            if(lastItem->next != NULL) {
                beforeLastItem;
            }
        }
        
        if(lastItem == beforeLastItem) {
            *list = NULL;
        } else {
            beforeLastItem->next = NULL;
        }
        free(lastItem);
        printf("Valor removido do final!\n");
    }
}

int removeItemMiddle(nodo **list, int index) {
    nodo *lastItem = *list, *nextItem = *list; //0
    int i;

    if(list != NULL) {
        for (i = 0; i < index - 1; i++)
        {
            if(lastItem->next != NULL) {
                lastItem = lastItem->next;
            }
        }

        if(i == index) {
            
            free(lastItem->next);
        }
        
    } else {
        return 1;
    }
}

nodo* findValue(nodo *list, int value) {
    nodo *findList = list, *nodoFound = NULL;

    while(findList->next != NULL) {
        if(findList->value == value) {
            nodoFound = findList;
        }
    }

    return nodoFound;
}

int addListMiddle(nodo **list, int value, int position) {
    nodo *newNodo = (nodo*)malloc(sizeof(nodo));
    nodo *middleNodo;
    int i, counter = 0;

    if(newNodo != NULL) {
        middleNodo = *list; //0
        for (i = 0; i < position - 1; i++) {
            if(middleNodo->next != NULL) {
                middleNodo = middleNodo->next;
                counter++;
            }
        }

        if(i == counter) {
            newNodo->value = value;

            if(position == 0) {
                newNodo->next = *list;
                *list = newNodo;
            } else {
                newNodo->next = middleNodo->next;
                printf("end: %d\nvalue: %d\n", middleNodo->next, middleNodo->value);
                middleNodo->next = newNodo; 
            }
           
        } else {
            printf("Nao foi possível armazenar nesta posicao!");
            return 1;
        }
        
        return 0;
    } else {
        printf("Memoria nao disponivel!");
        return 1;
    }
}

int main()
{
    nodo *list = NULL, *next;
    int option, value, index;
    
    do {
        printf("1 - Insere no inicio\n");
        printf("2 - Insere no final\n");
        printf("3 - Insere no meio\n");
        printf("4 - Procura valor\n");
        printf("5 - Remove no inicio\n");
        printf("6 - Remove no final\n");
        printf("7 - Remove no meio\n");
        printf("Digite sua opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Digite o valor a ser adicionado: ");
            scanf("%d", &value);
            addListBeginning(&list, value);
            break;
        case 2:
            printf("Digite o valor a ser adicionado: ");
            scanf("%d", &value);
            addListEnd(&list, value);
            break;
        case 3:
            printf("Digite o valor a ser adicionado: ");
            scanf("%d", &value);
            printf("Digite a posicao a ser adicionado: ");
            scanf("%d", &index);
            printf("Adicionado: %d\n", addListMiddle(&list, value, index));
            break;
        case 4:
            printf("Digite o valor a ser procurado: ");
            scanf("%d", &value);
            printf("Valor foi encontrado: %d", findValue(list, value));
            break;
        case 5:
            removeItemBeginning(&list);
            break;
        case 6:
            removeItemEnd(&list);
            break;
        case 7:
            printf("Digite a posicao a ser removida: ");
            scanf("%d", &index);
            printf("Removido: %d\n", removeItemMiddle(&list, index));
        default:
            break;
        }

    } while (option != 0);

    return 0;
}