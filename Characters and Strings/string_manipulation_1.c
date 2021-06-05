#include <stdio.h>


void reverse(const char * const sPtr);

// using fgets and putchar
int main(int argc, char const *argv[])
{
    char sentence[80];

    printf("Enter a sentence:\n");

    fgets(sentence, 80, stdin);
    printf("\nBackward:");

    reverse(sentence);


    return 0;
}

void reverse(const char * const sPtr)
{
    if (sPtr[0] == '\0')
    {
        return;
    }
    
    else
    {
        reverse(&sPtr[1]);
        putchar(sPtr[0]);
    }
}