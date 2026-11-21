//Write a program in C to check whether a number is prime or not.
#include <stdio.h>
int main()
{
    int n, i, flag = 1;     /* flag = 1 means prime */
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
        flag = 0;           /* 0, 1 and negative numbers are not prime */
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;       /* divisor found */
            break;
        }
    }
    if (flag == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}