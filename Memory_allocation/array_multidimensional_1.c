#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *p;
    int i, j, Nlinhas = 2, Ncolunas = 2;

    p = (int*) malloc(Nlinhas * Ncolunas * sizeof(int));
    for (i = 0; i < Nlinhas; i++)
    {
        for (j = 0; j < Ncolunas; j++)
        {
            p[i * Ncolunas + j] = i + j;
        }
        
    }

    for (i = 0; i < Nlinhas; i++)
    {
        for (j = 0; j < Ncolunas; j++)
        {
            printf("%5d", p[i * Ncolunas + j]);
        }
        printf("\n");
    }
    

    p = NULL;
    free(p);

    system("pause");




    return 0;
}
