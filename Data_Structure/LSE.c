#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Atributos de um produto
typedef struct Produto{
    char codigoBarras[8];
    char descricao[20];
    int categoria;
    float preco;
}Produto;

//Definição de um nodo
struct Nodo{
    Produto dado;
    struct Nodo *prox;
};
typedef struct Nodo nodo;

void iniciar(nodo *L)
{
    L->prox = NULL;
}

int estaVazia(nodo *L)
{
    if (L->prox == NULL)
        return 1; //vazia 
    else
        return 0;
}

// funções para inserir um elemento na lista:

void inserirInicio(nodo *L, Produto *dado)
{
    nodo *novo = (nodo*) malloc(sizeof(nodo)); //Alocar espaço para um novo nodo
    strcpy(novo->dado.codigoBarras, dado->codigoBarras);//
    strcpy(novo->dado.descricao, dado->descricao);//
    novo->dado.categoria = dado->categoria;//
    novo->dado.preco = dado->preco;// Copiando os atributos para o novo nodo inserido

    //Inserir o novo nodo no inicio:
    novo->prox = L->prox; 
    L->prox = novo->prox;
}

void inserirMeio (nodo *L, Produto *dado, char *produto)
{
    nodo *novo = (nodo*) malloc(sizeof(nodo)); //Alocar espaço para um novo nodo
    strcpy(novo->dado.codigoBarras, dado->codigoBarras);//
    strcpy(novo->dado.descricao, dado->descricao);//
    novo->dado.categoria = dado->categoria;//
    novo->dado.preco = dado->preco;// Copiando os atributos para o novo nodo inserido

    // Verificar se está vazia
    if(estaVazia(L))
        L->prox = novo; // Afirmativo: o novo nodo será o primeiro
    else
    {
        nodo *tmp = NULL;
        nodo *no = L->prox;
        while (no != NULL)
        {
            if (strcmp(no->dado.descricao, produto) == 0)
            {
                tmp = no->prox;
                no->prox = novo;
                novo->prox = tmp;
            }
            no = no->prox;
        }
    }
}

void inserirFinal(nodo *L, Produto *dado)
{
    nodo *novo = (nodo*) malloc(sizeof(nodo));
    strcpy(novo->dado.codigoBarras, dado->codigoBarras);
    strcpy(novo->dado.descricao, dado->descricao);
    novo->dado.categoria = dado->categoria;
    novo->dado.preco = dado->preco;

    if(estaVazia(L))
        L->prox = novo;
    else
    {
        nodo *no = L->prox;
        
        while (no->prox != NULL)
            no = no->prox;
        
        no->prox = novo;

        novo->prox = NULL; // verificar
    }
}

// Funções de exlusão de elementos da lista:

void excluirInicio(nodo *L)
{
    nodo *noPrimeiro = L->prox;
    L->prox = noPrimeiro->prox;
    free(noPrimeiro);
}

void excluirMeio(nodo *L, char *produto)
{
    nodo *noAnterior = L;
    nodo *noAtual = L->prox;
    while (noAtual->prox != NULL)
    {
        if(strcmp(noAtual->dado.descricao, produto) == 0)
        {
            noAnterior->prox = noAtual->prox;
            free(noAtual);
            return;
        }
        noAnterior = noAtual;
        noAtual = noAtual->prox;
    }
}

void excluirFinal(nodo *L)
{
    nodo *noAnterior = L;
    nodo *noAtual = L->prox;
    while (noAtual->prox != NULL)
    {
        noAnterior = noAtual;
        noAtual = noAtual->prox;
    }
    noAnterior->prox = NULL;
    free(noAtual);
    
}

void liberar(nodo *L)
{
    nodo *proximo;
    nodo *atual;
    atual = L;
    while (atual->prox != NULL)
    {
        proximo = atual->prox;
        atual->prox = NULL;
        free(atual);
        atual = proximo;
    }
    
}

//Funções de acesso/apoio à manipulação de uma lista:


void primeiro(nodo *L)
{
    if (estaVazia(L))
    {
        printf("Lista vazia.");
        return;
    }

    nodo *no = L->prox;
    printf("%-8s  %s  \t%s  %s  \n",
        "Codigo", "Descricao", "Valor", "Categoria");

    printf("%-8s  %s  \t%-6.2f  %d  \n", no->dado.codigoBarras, 
        no->dado.descricao, no->dado.preco, no->dado.categoria);
    printf("\n\n");
}

void ultimo(nodo *L)
{
    if(estaVazia(L))
    {
        printf("Lista vazia.");
        return;
    }
    nodo *no = L->prox;
    
    printf("%-8s  %s  \t%s  %s  \n",
        "Codigo", "Descricao", "Valor", "Categoria");
    
    while(no->prox != NULL)
    {
        if (no->prox == NULL)
        {
            printf("%-8s  %s  \t%-6.2f  %d  \n", no->dado.codigoBarras, 
                no->dado.descricao, no->dado.preco, no->dado.categoria);
        }
        no = no->prox;
    }
    printf("\n\n");
}

void pesquisar(nodo *L, char *descricao)
{
    if (estaVazia(L))
    {
        printf("Lista vazia.");
        return;
    }
    nodo *no = L->prox;

    printf("%-8s  %s  \t%s  %s  \n",
        "Codigo", "Descricao", "Valor", "Categoria");

    while (no != NULL)
    {
        if (strcmp(no->dado.descricao, descricao) == 0)
        {
            printf("%-8s  %s  \t%-6.2f  %d  \n", no->dado.codigoBarras, 
                no->dado.descricao, no->dado.preco, no->dado.categoria);
        }
        no = no->prox;
    }
    printf("\n\n");
}

void imprimir(nodo *L)
{
    if (estaVazia(L))
    {
        printf("Lista vazia.");
        return;
    }
    nodo *no = L->prox;

    printf("%-8s  %s  \t%s  %s  \n",
        "Codigo", "Descricao", "Valor", "Categoria");
    
    while (no != NULL)
    {
        printf("%-8s  %s  \t%-6.2f  %d  \n", no->dado.codigoBarras, 
            no->dado.descricao, no->dado.preco, no->dado.categoria);
        no = no->prox;
    }
    printf("\n\n");

}

int main()
{
    Produto produto[3];
    nodo *L = (nodo*) malloc(sizeof(nodo));
    iniciar(L);
    
    return 0;
}