#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int **p;
    int i, j, N = 2;

    p = (int**) malloc(N*sizeof(int *));

    for (i = 0; i < N; i++)
    {
        p[i] = (int *) malloc(N*sizeof(int));
        for (j = 0; j < N; j++)
        {
            scanf("%d", &p[i][j]);
        }
        
    }
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%5d", p[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < N; i++)
    {
        free(p[i]);
    }

    free(p);

    system("pause");

    return 0;
}
