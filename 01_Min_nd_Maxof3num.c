//Write a program in C to find the minimum and maximum of three numbers.
 #include <stdio.h>
int main()
{
    int a, b, c, min, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    min = a;                /* assume first number is the minimum */
    max = a;                /* assume first number is the maximum */
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    return 0;
}