//Write a program in C to swap two variables whose values are given by the user, using a function.
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;          /* store value of first variable */
    *x = *y;            /* copy second value into first */
    *y = temp;          /* copy stored value into second */
}
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);       /* call by reference */
    printf("After swapping : a = %d, b = %d\n", a, b);
    return 0;
}