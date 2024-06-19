#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main -Entry point 
 * 
 * retun: Always 0
 */
 int main(void)
 {
     int n;
     srand(time(0));
     n = rand() - RAND_MAX / 2;
if (n % 10 > 5) {
        printf("The last digit of %d is greater than 5.\n", n);
    } else {
        printf("The last digit of %d is not greater than 5.\n", n)
        if (n % 10 == 0) {
        printf("The last digit of %d is 0.\n", n);
    } else {
        printf("The last digit of %d is not 0.\n", n);
        
    return (0);
    }
