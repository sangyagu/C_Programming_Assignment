//If a five-digit number is input through the keyboard, write a program in C to reverse the number.
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999)
    {
        printf("Please enter a five-digit number only.\n");
        return 0;
    }
    printf("Reverse of the number = ");
    for (i = 1; i <= 5; i++)
    {
        printf("%d", num % 10);     /* print last digit */
        num = num / 10;             /* remove last digit */
    }
    printf("\n");
    return 0;
}