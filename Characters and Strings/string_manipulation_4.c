#include<stdio.h>

//using sscanf

int main(int argc, char const *argv[])
{
    char s[] = "322 9.91";

    int x;
    double y;

    sscanf(s, "%d%lf", &x, &y);

    printf("%s\n%s%6d\n%s%9.3f\n",
            "The values stores in character array s are: ",
            "integer: ", x, "double: ", y);
    return 0;
}
