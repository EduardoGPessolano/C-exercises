#include<stdio.h>
#include<stdlib.h>

typedef struct point{

    int x, y;

}point;

void value_sum(int *n){

    *n += 1;
    printf("valor = %d\n", *n);

}


int main(int argc, char const *argv[])
{
    point point;

    point.x = 1;
    point.y = 2;
    
    value_sum(&point.x);
    printf("value = %d\n", point.x);
    
    value_sum(&point.y);
    printf("value = %d\n", point.y);

    return 0;
}
