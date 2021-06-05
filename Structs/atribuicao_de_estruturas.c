#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ponto
{
    int x;
    int y;

} ponto;

typedef struct novo_ponto
{
    int x;
    int y;

} novo_ponto;


int main(int argc, char const *argv[])
{
    ponto p1, p2 = {1, 2};
    novo_ponto p3 = {3};

    // Válido para arrays também!
    p1 = p2;
    printf("p1 = %d e %d", p1.x, p1.y);

// Gera um erro; p1 e p3 não tem o mesmo tipo de dado "ponto".
    // p1 = p3;
    // printf("p1 = %d e %d", p1.x, p1.y);

    return 0;
}
