#include <stdio.h>

int main(int argc, char const *argv[])
{
    int request;
    int account;
    double balance;
    char name[30];
    FILE *cfPtr;

    if ((cfPtr = fopen("clients.dat", "r")) == NULL)
        printf("An error occurred while opening 'clients.dat'\n");

    else
    {
        printf("Enter request\n"
               " 1 - List accounts with zero balances\n"
               " 2 - List accounts with credit balances\n"
               " 3 - List accounts with debit balances\n"
               " 4 - End of run\n? ");
        scanf("%d", &request);

        while (request != 4)
        {
            fscanf(cfPtr, "%d%s%lf", &account, name, &balance);

            switch (request)
            {
            case 1:
                printf("Accounts with zero balances:\n");

                while (!feof(cfPtr))
                {
                    if (balance == 0)
                    {
                        printf("%-10d%-13s%7.2f\n",
                               account, name, balance);
                    }

                    fscanf(cfPtr, "%d%s%lf",
                           &account, name, &balance);
                }
                break;

            case 2:
                printf("Accounts with credit balances:\n");

                while (!feof(cfPtr))
                {
                    if (balance < 0)
                    {
                        printf("%-10d%-13s%7.2f\n",
                               account, name, balance);
                    }

                    fscanf(cfPtr, "%d%s%lf",
                           &account, name, &balance);
                }
                break;

            case 3:
                printf("Accounts with debit balances:\n");

                while (!feof(cfPtr))
                {
                    if (balance > 0)
                    {
                        printf("%-10d%-13s%7.2f\n",
                               account, name, balance);
                    }

                    fscanf(cfPtr, "%d%s%lf",
                           &account, name, &balance);
                }
                break;
            }
            rewind(cfPtr);

            printf( "\n? " );

            scanf( "%d", &request );
        }
        fclose(cfPtr);
    }

    return 0;
}
