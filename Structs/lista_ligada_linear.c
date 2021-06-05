#include<stdio.h>
#include<stdlib.h>

typedef struct tipo_no{
    int info;
    no *prox;
}no;

void insere_inicio (int n, no **inicio){
    no *aux = (no*) malloc(sizeof(no));
    
    if(aux){
        aux->info = n;
        if (*inicio == NULL){ // (!(*inicio)) - LISTA VAZIA
            (*inicio) = aux;
            (*inicio)->prox = NULL;
        }
        else{ // - LISTA NÃO VAZIA
            aux->prox = (*inicio);
            (*inicio) = aux;
        }
    }

    else printf("Heap overflow!\n");
}

void insere_fim (int n, no **inicio){
    no *aux = (no*) malloc (sizeof(no));

    if (aux){
        aux->info = n;
        aux->prox = NULL;

        if (*inicio == NULL){
            (*inicio) = aux;
        }
        else{
            no *p = (*inicio);
            while (p->prox != NULL)
                p = p->prox;

            p->prox = aux;
            
        }
    }
}

void imprir_lista (no *inicio){
    while (inicio){
        printf("%d", inicio->info);
        inicio = inicio->prox;
    }
}

void presente_na_lista (int n, no *inicio){
    while(inicio){
        if(inicio->info == n) return (1);
        inicio = inicio->prox;
    }
    return(0);
}

no* buscar_elemento(int n, no *inicio){
    while(inicio){
        if(inicio->info == n) return (inicio);
        inicio = inicio->prox;
    }
    return(NULL);
}

int remover_elemento_inicial(no **inicio){
    if(inicio == NULL) return(-1);

    no *aux = (*inicio);

    int n = (*inicio)->info;
    (*inicio) = (*inicio)->prox;

    free(aux);
    
    return (n);
}

int main(int argc, char const *argv[])
{
    no *inicio = NULL;












    return 0;
}
