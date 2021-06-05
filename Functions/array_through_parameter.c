#include<stdio.h>
#include<stdlib.h>


// void print_vector(int *m, int n);
// void print_vector(int m[], int n);
// void print_vector(int m[5], int n);

void print_vector(int *n, int tam){
    /*Prints an array as follows: vet[index] = value*/

    for (int i = 0; i < tam; i++)
    {
        printf("vet[%d] = %d\n", i, n[i]);
    }
    

}


int main(int argc, char const *argv[])
{
    int v[5] = {1, 2, 3, 4, 5};

    print_vector(v, 5);

    return 0;
}
