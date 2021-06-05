#include<stdio.h>

//Using getchar and puts

int main(int argc, char const *argv[])
{
    char c;
    char sentence[80];
    int i = 0;

    puts("Enter a line of text:");

    while ((c = getchar()) != '\n')
    {
        sentence[i++] = c;
    }
    
    sentence[i] = '\0';

    puts("\nThe entered sentece was: ");
    puts(sentence);

    return 0;
}
