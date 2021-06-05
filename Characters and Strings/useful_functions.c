#include <stdio.h>
#include <stdlib.h>

//some functions to perform conversions
int main(int argc, char const *argv[])
{
    double d;
    int i;
    long l;


    i = atoi("5");
    printf("%s%d\n%s%.2f\n",
        "The string \"5\" converted to int is: ", i,
        "Dividing it by 2 is: ", (double) i / 2);

    d = atof("42.0");
    printf("%s%.3f\n%s%.3f\n",
        "The string \"99.0\" converted to double is: ", d,
        "Dividing it by 2 is: ", d / 2.0);

    l = atol("1000000");
    printf("%s%ld\n%s%ld\n",
        "The string \"1000000\" converted to long is: ", l,
        "Dividing it by 2 is: ", l / 2);

    return 0;
}
