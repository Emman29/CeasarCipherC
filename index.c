#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc > 2 || argc < 2)
    {
        printf("Error. Try again.\n");
        return 1;
    }
    else if (!isdigit(argv[1][0]))
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }


    int key = atoi(argv[1]);
    string word = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0; i <= strlen(word); i++)
    {

        if(isupper(word[i]))
        {
            printf("%c", (((word[i] - 65) + key) % 26) + 65);
        }
        else if (islower(word[i]))
        {
            printf("%c", (((word[i] - 97) + key) % 26) + 97);
        }
        else
        {
            printf("%c", word[i]);
        }
    }
    printf("\n");
    return 0;

}
