#include<stdio.h>
#include<stdlib.h>

// Possibilidades de criação de enum
// enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
// enum semana {Sunday = 1, Monday, Tuesday = 7, Wednesday, Thursday, Friday, Saturday};
enum scape {retr='\b', tab='\t', new_line='\n'};

int main(int argc, char const *argv[])
{
    enum scape e = new_line;

    printf("Hi, %c Sr. %c !", e, e);
    e = tab;
    printf("\nHi, %c Sr. %c !", e, e);

    return 0;
}
