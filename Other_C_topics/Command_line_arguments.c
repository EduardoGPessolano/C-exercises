#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE *inFilePtr;
    FILE *outFilePtr;
    int c;

    if(argc != 3)
    {
        fprintf(stderr, "Usage: mycopy infile outfile\n");
        return 1;
    }
    else
    {
        if ((inFilePtr = fopen(argv[1], "r")) != NULL)
        {
            if ((outFilePtr = fopen(argv[2], "w")) != NULL)
            {
                while ((c = fgetc(inFilePtr)) != EOF)
                {
                    fputc(c, outFilePtr);
                }
            }
            else
            {
                fprintf(stderr, "File /%s/ could not be opened\n", argv[2]);
                return 2;   
            }
        }
        else
        {
            fprintf(stderr, "File /%s/ could not be opened\n", argv[1]);
            return 2;   
        }
    }
    fclose(inFilePtr);
    fclose(outFilePtr);

    return 0;
}