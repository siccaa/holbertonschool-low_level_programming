#include <stdio.h>

// Prototype for _isdigit
int _isdigit(int c);

// Function definition for _isdigit
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Main function to test _isdigit
int main(void)
{
    char test1 = '5';
    char test2 = 'a';
    char test3 = '0';
    char test4 = '9';
    char test5 = '!';

    printf("Is %c a digit? %d\n", test1, _isdigit(test1)); // Expected output: 1
    printf("Is %c a digit? %d\n", test2, _isdigit(test2)); // Expected output: 0
    printf("Is %c a digit? %d\n", test3, _isdigit(test3)); // Expected output: 1
    printf("Is %c a digit? %d\n", test4, _isdigit(test4)); // Expected output: 1
    printf("Is %c a digit? %d\n", test5, _isdigit(test5)); // Expected output: 0

    return 0;
}
