#include<stdio.h>
#include<stdlib.h>

void imprime_matriz(int *m, int n){
    
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("%d \n", m[i]);
    }
    

}

int main(int argc, char const *argv[])
{
    int matriz[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    imprime_matriz(&matriz[0][0], 6);

    return 0;
}
