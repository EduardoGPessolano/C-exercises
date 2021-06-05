#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *c;
    int *i;

    //Suficiente para armazenar 1000 char. (1 char -> 1 byte)
    c = (char *) malloc(1000);

    //Suficiente para armazenar 250 int. (1 int -> 4 bytes)
    i = (int *) malloc(1000);

    c = NULL;
    i = NULL;

    free(c);
    free(i);
    system("pause");

    return 0;
}
