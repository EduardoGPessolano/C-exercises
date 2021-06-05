#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int *p;
    
    p = (int*) malloc(5*sizeof(int));
    if (p == NULL)
    {
        printf("\nFalha ao reservar memoria!\n");
        system("pause");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Valor para [%d]: ", i);
        scanf("%d", &p[i]);
    }

    p = NULL;
    free(p);
    system("pause");

    return 0;
}
