/*Write a program in C to compute the average of five integer numbers which will be given by array
variables, using functions.*/
#include <stdio.h>
void readArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
float average(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + arr[i];
    return (float) sum / n;     /* type cast to keep decimal part */
}
int main()
{
    int numbers[5];
    float avg;
    printf("Enter five integer numbers:\n");
    readArray(numbers, 5);
    avg = average(numbers, 5);
    printf("Average = %.2f\n", avg);
    return 0;
}