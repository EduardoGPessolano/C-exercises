#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[20];
    float nota;
    int turma;
}Aluno;

struct Nodo{
    Aluno dado;
    struct Nodo *prox;
    struct Nodo *ant;
};
typedef struct Nodo nodo;

struct Descritor{
    int n;
    nodo *prim;
    nodo *ult;
};
typedef struct Descritor descritor;

void iniciar(nodo *L, descritor *D)
{
    L->ant = NULL;
    L->prox = NULL;

    D->n = 0;
    D->prim = NULL;
    D->ult = NULL;
}

int estaVazia(descritor *D)
{
    if (D->n == 0)
        return 1;
    else
        return 0;
}

Aluno primeiroElemento(descritor *D)
{
    nodo *no = D->prim;
    return no->dado;
}

Aluno ultimoElemento(descritor *D)
{
    nodo *no = D->ult;
    return no->dado;
}

void inserirInicio(nodo *L, descritor *D, Aluno *dado)
{
    nodo *novo = (nodo*) malloc(sizeof(nodo));
    strcpy(novo->dado.nome, dado->nome);
    novo->dado.turma = dado->turma;
    novo->dado.nota = dado->nota;

    if(estaVazia(D))
    {
        L->prox = novo;
        novo->prox =NULL;
        D->ult = novo;
    }
    else
    {
        nodo *primeiro = L->prox;
        L->prox = novo;
        novo->prox = primeiro;
        primeiro->ant = novo;
    }

    D->n++;
    D->prim = novo;
    novo->ant = NULL;
}

void excluirInicio(nodo *L, descritor *D)
{
    nodo *primeiro = L->prox;
    nodo *segundo = primeiro->prox;

    L->prox = segundo;
    segundo->ant = NULL;

    D->prim = segundo;
    D->n--;

    free(primeiro);
}

void excluirFinal(nodo *L, descritor *D)
{
    nodo *ultimo = D->ult;
    nodo *penultimo = ultimo->ant;

    penultimo->prox = NULL;
    D->ult = penultimo;
    D->n--;

    free(ultimo);
}

void liberar(nodo *L, descritor *D)
{
    if (!estaVazia(D))
    {
        nodo *proxNodo, *atual;
        atual = L->prox;

        while (atual != NULL)
        {
            proxNodo = atual->prox;
            free(atual);
            atual = proxNodo;
            D->n--;
        }
    }
}

void imprimir(nodo *L, descritor *D, char ordem)
{
    if (estaVazia(D))
    {
        printf("Lista vazia.");
        return;
    }
    
    if(ordem == 'i')
    {
        nodo *no = L->prox;
        printf("%-10s %-6s %-5s \n", "Nome", "Nota", "Turma");
        while(no != NULL)
        {
            printf("%-10s %-6.1f %-4d \n", no->dado.nome, 
                no->dado.nota, no->dado.turma);

            no = no->prox;
        }
    }
    else
        if(ordem == 'f')
        {
            nodo *no = D->ult;
            printf("%-10s %-6s %-5s \n", "Nome", "Nota", "Turma");
            while (no != NULL)
            {
                printf("%-10s %-6.1f %-4d \n", no->dado.nome, 
                    no->dado.nota, no->dado.turma);

                no = no->ant;
            }
        }
        printf("\n\n");
}

int main(int argc, char const *argv[])
{
    Aluno aluno;
    nodo *L  = (nodo*) malloc(sizeof(nodo));
    descritor *D = (descritor*) malloc(sizeof(descritor));

    return 0;
}