// Write a program in C to check whether a given number is a palindrome or not.
#include <stdio.h>
int main()
{
    int num, original, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;         /* keep a copy of the original number */
    while (num > 0)
    {
        digit = num % 10;           /* extract last digit */
        rev = rev * 10 + digit;     /* build the reversed number */
        num = num / 10;             /* remove last digit */
    }
    if (original == rev)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);
    return 0;
}