#include<stdio.h>
#include<string.h>

//Using strcpy and strncpy 

int main(int argc, char const *argv[])
{
    char x[] = "Happy Birthday to You";
    char y[25];
    char z[15];

    printf("%s%s\n%s%s",
            "The string in array x is: ", x,
            "The string in array y is: ", strcpy(y, x));
    
    //the third argument is less than the string length of the second argument.
    strncpy(z, x, 14);

    //meaning that we must append the '\0'
    z[14] = '\0';

    printf("\nString z is: %s\n", z);
    
    return 0;
}
