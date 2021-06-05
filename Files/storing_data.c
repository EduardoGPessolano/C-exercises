#include <stdio.h>

int main(int argc, char const *argv[])
{
    int account;
    char name[30];
    double balance;

    FILE *cfPtr;

    if ((cfPtr = fopen("clients.dat", "w")) == NULL)
        printf("Unable to open file\n");

    else
    {
        printf("Enter the account, name, and balance.\n");
        printf("Enter EOF to end input.\n");
        printf("? ");
        scanf("%d%s%lf", &account, name, &balance);
    }

    while (!feof(stdin))
    {
        fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
        printf("? ");
        scanf("%d%s%lf", &account, name, &balance);
    }
    fclose(cfPtr);

    return 0;
}
