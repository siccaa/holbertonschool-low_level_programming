#include <stdio.h>

/* Prototype for _isupper */
int _isupper(int c);

int main(void)
{
    char test1 = 'A';
    char test2 = 'a';
    char test3 = 'Z';
    char test4 = 'z';
    char test5 = '5';

    printf("Is %c an uppercase letter? %d\n", test1, _isupper(test1)); /* Expected output: 1 */
    printf("Is %c an uppercase letter? %d\n", test2, _isupper(test2)); /* Expected output: 0 */
    printf("Is %c an uppercase letter? %d\n", test3, _isupper(test3)); /* Expected output: 1 */
    printf("Is %c an uppercase letter? %d\n", test4, _isupper(test4)); /* Expected output: 0 */
    printf("Is %c an uppercase letter? %d\n", test5, _isupper(test5)); /* Expected output: 0 */

    return 0;
}
