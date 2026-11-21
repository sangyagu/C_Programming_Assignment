//Write a program in C to check the Krishnamurthy number.
#include <stdio.h>
int main()
{
    int num, temp, digit, i, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++)
            fact = fact * i;            /* factorial of the digit */
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == num)
        printf("%d is a Krishnamurthy number.\n", num);
    else
        printf("%d is not a Krishnamurthy number.\n", num);
    return 0;
}