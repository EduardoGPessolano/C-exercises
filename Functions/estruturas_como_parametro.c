#include<stdio.h>
#include<stdlib.h>

typedef struct ponto{

    int x, y;

}ponto;


void imprime_ponto(ponto point){

    printf("x = %d, y = %d", point.x, point.y);

}


int main(int argc, char const *argv[])
{
    ponto p1;

    p1.x = 0;
    p1.y = 1;

    imprime_ponto(p1);

    return 0;
}
