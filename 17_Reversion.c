// Write a program in C to reverse the elements of an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    i = 0;                  /* index of first element */
    j = n - 1;              /* index of last element */
    while (i < j)
    {
        temp = arr[i];      /* swap arr[i] and arr[j] */
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}