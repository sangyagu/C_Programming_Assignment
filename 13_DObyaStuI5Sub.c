/*Write a program in C to calculate the division obtained by a student in five subjects: 60% or above = 1st
division, 50% - 60% = 2nd division, 40% - 50% = 3rd division, 40% or below = fail.*/
#include <stdio.h>
int main()
{
    int marks, i, total = 0;
    float percentage;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter marks of subject %d (out of 100): ", i);
        scanf("%d", &marks);
        total = total + marks;
    }
    percentage = total / 5.0;       /* total marks are out of 500 */
    printf("Total Marks = %d out of 500\n", total);
    printf("Percentage  = %.2f%%\n", percentage);
    if (percentage >= 60)
        printf("Division    : First Division\n");
    else if (percentage >= 50)
        printf("Division    : Second Division\n");
    else if (percentage > 40)
        printf("Division    : Third Division\n");
    else
        printf("Division    : Fail\n");
    return 0;
}