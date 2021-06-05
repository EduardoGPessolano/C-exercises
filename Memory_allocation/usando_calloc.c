#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    
    int *p, *p1;
    
    p = (int *) malloc(5 * sizeof(int));
    p1 = (int *) calloc(5, sizeof(int));
     
    printf("Calloc:\t\t Malloc:");
     
    for (i = 0; i < 5; i++)
    {
        printf("\np1[%d] = %d;\t p[%d] = %d\n", i, p1[i], i, p[i]);
    }
    p1 = NULL;
    p = NULL;
    
    free(p1);
    free(p);
    return 0;
}