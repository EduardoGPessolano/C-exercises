#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{

    char nome[50]; 
    int idade; 
    char rua[50]; 
    int numero;

}cadastro;

// Pode-se usar o comando typedef para dar um alias a determinado tipo
// nesse caso, cadastro.
// Não é necessário escrever "struct" antes da declaração, portanto.

int main(int argc, char const *argv[])
{
    cadastro c;
    
    strcpy(c.nome, "Carlos"); 
    
    c.idade = 20;
    
    strcpy(c.rua, "Avenida Brasil");

    c.numero = 1801;

    return 0;
}
