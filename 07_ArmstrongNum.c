//Write a program in C to check the Armstrong number.
#include <stdio.h>
int main()
{
    int num, temp, digit, count = 0, i, power, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)            /* count the digits */
    {
        count++;
        temp = temp / 10;
    }
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= count; i++)
            power = power * digit;      /* digit ^ count */
        sum = sum + power;
        temp = temp / 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}