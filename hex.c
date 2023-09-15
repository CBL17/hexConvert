#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("No arguments provided!");
        return EXIT_FAILURE;
    }

    for (int i = 1; i < argc; i++)
    {
        long long int number = strtoull(argv[i], NULL, 0);

        if (number > LONG_LONG_MAX || number < LONG_LONG_MIN)
        {
            printf("Argument #%d out of range!", i);

            return EXIT_FAILURE;
        }
        else if (number == 0)
        {
            printf("Argument #%d invalid! ", i);

            return EXIT_FAILURE;
        }
    }

    for (int i = 1; i < argc; i++)
    {   
        long long int number = strtoull(argv[i], NULL, 0);
        
        printf("0x%x ", number);
    }

    return EXIT_SUCCESS;
}
