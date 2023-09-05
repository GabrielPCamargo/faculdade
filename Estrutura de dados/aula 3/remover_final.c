// Gabriel Pinós Camargo - Estrutura de dados

#include <stdio.h>
#include <stdlib.h>

typedef struct Knot {
    struct Knot *next;
    int value;
} knot;

//tipo para armazenar ponteiro do valor encontrado e do anterior.
typedef struct {
    knot *before;
    knot *actual;
} middle_pointers;

void add_start(knot **start, int value) {
    knot *new;
    new = (knot*) malloc(sizeof(knot));
    if(new == NULL) {
        printf("Nao ha memoria disponivel\n");
    } else {
        new->value = value;
        new->next = *start;
        *start = new;
    }
}

void add_end(knot **start, int value) {
    knot *new, *aux;
    new = (knot*)malloc(sizeof(knot));

    if(new) {
        new->value = value;
        new->next = NULL;
        if(*start == NULL) {
            *start = new;
        } else {
            aux = *start;
            while(aux->next != NULL) {
                aux = aux->next;
            }
            aux->next = new;
        }
    }
}

void remove_end(knot **start){
    knot *beforeLast = *start;
    if(*start == NULL) {
        printf("Lista vazia\n");
    } else if (beforeLast->next == NULL) {
        free(beforeLast);
        *start = NULL;
    } else {

        beforeLast = *start;

        if(beforeLast->next != NULL) {
            while(beforeLast->next->next != NULL) {
                beforeLast = beforeLast->next;
            }
        }

        free(beforeLast->next);
        beforeLast->next = NULL;
    }
}

void remove_start(knot **start){
    knot *aux = *start;
    if(aux == NULL) {
        printf("lista vazia\n");
    }else {
        *start = aux->next;
        free(aux);
    }
}

void print_list(knot *start) {
    knot *aux;
    int circular = 0;
    if(start != NULL) {
        aux = start;
        while(aux != NULL && circular == 0) {
            printf("End: %p, Value %d, aponta: %p\n", aux, aux->value, aux->next);
            aux = aux->next;
            if(aux == start) {
                printf("Lista circular impressa!\n");
                circular = 1;
            }
        }
    } else {
        printf("Nao ha elementos na lista\n");
    }
}

middle_pointers find_first_value_on_list(knot *start, int value) {
    knot *aux = start, *before_aux = start;
    middle_pointers pointers = {.actual = NULL, .before = NULL};
    if(aux == NULL) {
        printf("Lista vazia.");
    } else {
        while(aux != NULL) {
            if(aux->value == value) {
                printf("Valor encontrado no endereco %p\n", aux);
                pointers.actual = aux;
                pointers.before = before_aux;
                return pointers;
            }
            before_aux = aux;
            aux = aux->next;
        }

    }

    return pointers;
}

void add_before_item(knot **start, int item_value, int value) {
    middle_pointers pointers = find_first_value_on_list(*start, item_value);
    knot *new;

    if(pointers.actual == NULL) {
        printf("Valor nao encontrado!\n");
    } else {
        if (pointers.before == *start) {
            add_start(start, value);
        } else {
            new = (knot *)malloc(sizeof(knot));
            if(new == NULL) {
                printf("Memoria nao alocada");
            } else {
                new->value = value;
                new->next = pointers.actual;
                pointers.before->next = new;
            }
        }
    }
}

void remove_item_middle(knot **start, int item_value) {
    middle_pointers pointers = find_first_value_on_list(*start, item_value);
    knot *aux;
    if(pointers.actual == NULL) {
        printf("Valor nao encontrado. ");
    } else {
        if (pointers.actual == *start) {
            remove_start(start);
        } else {
            aux = pointers.actual->next;
            printf("Value: %d", pointers.actual->value);
            free(pointers.actual);
            pointers.before->next = aux;
        }
    }
}

void remove_all_items_middle(knot **start, int item_value) {
    middle_pointers pointers = find_first_value_on_list(*start, item_value);
    knot *aux;
    if(pointers.actual == NULL) {
        printf("Valor nao encontrado. ");
    } else {
        do {
            if (pointers.actual == *start) {
                remove_start(start);
            } else {
                aux = pointers.actual->next;
                printf("Value: %d", pointers.actual->value);
                free(pointers.actual);
                pointers.before->next = aux;
            }
            pointers = find_first_value_on_list(pointers.before, item_value);
        } while (pointers.actual != NULL);
    }
}

void insert_ordered(knot **start, int value) {
    knot *new, *aux, *before = NULL;
    new = (knot*)malloc(sizeof(knot));

    if(new) {
        new->value = value;
        new->next = NULL;
        if(*start == NULL) {
            *start = new;
        } else {
            aux = *start;
            before = aux;
            while(aux->next != NULL && aux->value < value) {
                before = aux;
                aux = aux->next;
            }
            if(aux == before) {
                add_start(start, value);
            } else {
                if(aux->value >= value) {
                    new->next = aux;
                    before->next = new;
                } else {
                    aux->next = new;
                }
            }
        }
    }
}

void make_circular(knot *start) {
    knot *aux;
    int circular = 0;
    if(start == NULL) {
        printf("Lista vazia\n");
    } else if ((start)->next == NULL) {
        printf("Lista com somente um elemento\n");
    } else {
        aux = start;
        while(aux->next != NULL && circular == 0) {
            aux = aux->next;
            if(aux == start) {
                circular = 1;
                printf("Lista ja e circular!\n");
            }
        }
        if(circular == 0) aux->next = start;
    }
}

int main() {
    knot *start;
    int option, value, item_value;
    do {
        printf("\n================================================================\n");
        printf("1 - Adiconar no final\n2 - Adiconar no comeco\n3 - Remover do final\n4 - Remover inicio\n5 - Listar elementos\n6 - Find on list\n7 - Adicionar no meio\n8 - Remove no meio\n9 - Remover todos os valores no meio\n10 - Adicionar ordenado\n11 - Tornar circular\n");
        printf("================================================================\n");
        printf("Digite a sua opcao: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &value);
                add_end(&start, value);
                break;
            case 2:
                printf("Digite o valor: ");
                scanf("%d", &value);
                add_start(&start, value);
                break;
            case 3:
                remove_end(&start);
                break;
            case 4:
                remove_start(&start);
                break;
            case 5:
                print_list(start);
                break;
            case 6:
                printf("Digite o valor: ");
                scanf("%d", &value);
                find_first_value_on_list(start, value);
                break;
            case 7:
                printf("Digite o valor: ");
                scanf("%d", &value);
                printf("Digite o valor do no a ser encontrado: ");
                scanf("%d", &item_value);
                add_before_item(&start, item_value, value);
                break;
            case 8:
                printf("Digite o valor: ");
                scanf("%d", &value);
                remove_item_middle(&start, value);
                break;
            case 9:
                printf("Digite o valor: ");
                scanf("%d", &value);
                remove_all_items_middle(&start, value);
                break;
            case 10:
                printf("Digite o valor: ");
                scanf("%d", &value);
                insert_ordered(&start, value);
                break;
            case 11:
                make_circular(start);
                break;
        }
    } while (option != 12);
    return 0;
}

