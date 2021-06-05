#include<stdio.h>
#include<stdlib.h>

typedef struct vetor{

    int array[5];

}vetor;


vetor retorna_vetor(){
    /*Returns an array with 5 elements*/
    
    vetor v = {1, 2, 3, 4, 5};

    return v;
}


int main(int argc, char const *argv[])
{
    vetor vet = retorna_vetor();

    for (int i = 0; i < 5; i++)
    {
        printf("vet[%d] = %d\n", i, vet.array[i]);
    }
    
    return 0;
}
