#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int *p = malloc(5*sizeof(int));
    // int *p = realloc(NULL, 5*sizeof(int))
   
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }
    printf("\n");

    //Diminuir o tamanho do array

    p = realloc(p, 3*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }
    printf("\n");

    //Aumentar o tamanho do array

    p = realloc(p, 10*sizeof(int));

    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", p[i]);
    }

    p = NULL; //conveniencia
    p = (int*) realloc(p, 0); // mesma ação de free()
    //free(p);

    return 0;
}
