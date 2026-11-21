/* If a five-digit number is input through the keyboard, write a program in C to calculate the sum of its
digits.*/
#include <stdio.h>
int main()
{
    int num, temp, sum = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999)
    {
        printf("Please enter a five-digit number only.\n");
        return 0;
    }
    temp = num;
    while (temp > 0)
    {
        sum = sum + temp % 10;      /* add last digit */
        temp = temp / 10;           /* drop last digit */
    }
    printf("Sum of the digits of %d = %d\n", num, sum);
    return 0;
}