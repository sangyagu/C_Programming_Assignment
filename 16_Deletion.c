// Write a program in C to delete an element at a specific position of an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
        return 0;
    }
    printf("Deleted element = %d\n", arr[pos - 1]);
    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];            /* shift elements to the left */
    n--;
    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}