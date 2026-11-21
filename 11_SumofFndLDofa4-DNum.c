/* If a four-digit number is input through the keyboard, write a program in C to obtain the sum of the first
and last digit of this number.*/
#include <stdio.h>
int main()
{
    int num, first, last, sum;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    if (num < 1000 || num > 9999)
    {
        printf("Please enter a four-digit number only.\n");
        return 0;
    }
    last = num % 10;        /* remainder after dividing by 10 */
    first = num / 1000;     /* integer division gives first digit */
    sum = first + last;
    printf("First digit = %d\n", first);
    printf("Last digit  = %d\n", last);
    printf("Sum of first and last digit = %d\n", sum);
    return 0;
}