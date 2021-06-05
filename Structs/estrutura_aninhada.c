#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct endereco{

    char rua[50]; 
    int numero;

}endereco;

typedef struct cadastro{

    char nome[50]; 
    int idade; 
    endereco ender;

}cadastro;

int main(int argc, char const *argv[])
{
    cadastro c;
    
    gets(c.nome);
    scanf("%d", &c.idade);
    gets(c.ender.rua);
    scanf("%d", &c.ender.numero);

    return 0;
}
