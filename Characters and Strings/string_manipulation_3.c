#include <stdio.h>

// Using sprintf
int main(int argc, char const *argv[])
{
    char s[80];
    int x;
    double y;

    printf("Enter an integer and a double: ");
    scanf("%d %lf", &x, &y);

    sprintf(s, "integer: %d;\ndouble: %.2f.\n", x, y);

    printf(s);


    return 0;
}
