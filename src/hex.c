#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("No arguments provided!");
        return EXIT_FAILURE;
    }

    char * endptr;
    for (int i = 1; i < argc; i++)
    {
        errno = 0;
        long long int number = strtoll(argv[i], &endptr, 0);

        if (endptr == argv[i])
        {
            printf("Argument #%d: Invalid character(s)! ", i);

            return EXIT_FAILURE;
        }
        else if (errno != 0)
        {
            printf("Argument #%d: Integer overflow! ", i);

            return EXIT_FAILURE;
        }
    }

    for (int i = 1; i < argc; i++)
    {   
        long long int number = strtoll(argv[i], NULL, 0);
        
        printf("0x%llx ", number);
    }

    return EXIT_SUCCESS;
}
