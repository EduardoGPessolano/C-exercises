#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{

    char nome[50]; 
    int idade; 
    char rua[50]; 
    int numero;

}cadastro;

int main(int argc, char const *argv[])
{
    cadastro c[4];

    int size = sizeof c / sizeof c[0];
    printf("%d", size); 

    for (int i = 0; i < size; i++)
    {
        gets(c[i].nome);
        scanf("%d", &c[i].idade);
        gets(c[i].rua);
        scanf("%d", &c[i].numero);
    }
    

    return 0;
}
