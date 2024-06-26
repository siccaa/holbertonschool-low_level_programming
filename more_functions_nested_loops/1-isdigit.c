#include <stdio.h>


int _isdigit(int c);

int main(void)
{
    char test1 = '5';
    char test2 = 'A';
    char test3 = '9';

    printf("%c is a digit? %d\n", test1, _isdigit(test1)); 
    printf("%c is a digit? %d\n", test2, _isdigit(test2)); 
    printf("%c is a digit? %d\n", test3, _isdigit(test3)); 

    return 0;
}


int _isdigit(int c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;  
    }
}
