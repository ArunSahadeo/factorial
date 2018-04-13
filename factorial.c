#include <stdio.h>
#include <stdlib.h>

int factorial(int number)
{
    if (number == 1) return 1;

    else return number * factorial(number - 1);
}

int main()
{
    int arg;
    char buffer[100];

    printf("Please enter an integer value: ");
    
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        fprintf(stderr, "Error in fgets()\n");
        exit(EXIT_FAILURE);
    }

    if (sscanf(buffer, "%d", &arg) != 1)
    {
        printf("You did not enter an integer.\n");
        exit(EXIT_FAILURE);
    }

    printf("%s%d\n", "The value: ", factorial(arg));
    return 0;
}
