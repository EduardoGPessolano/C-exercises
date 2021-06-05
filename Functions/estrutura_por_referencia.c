#include<stdio.h>
#include<stdlib.h>

typedef struct ponto{

    int x, y;

}ponto;

// void atribuir(ponto *point){

//     (*point).x = 10;
//     (*point).y = 20;

// }


//Quando uma referencia de uma estrutura é passada por parametro
//é possível utilizar o operador seta (->) para acessar os campos

void atribuir(ponto *point){

    point->x = 10;
    point->y = 20;

}

int main(int argc, char const *argv[])
{
    ponto p;

    atribuir(&p);

    printf("x = %d; y = %d", p.x, p.y);



    return 0;
}
