//Write a program in C to insert an element at a specific position of an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, pos, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!\n");
        return 0;
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    for (i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];            /* shift elements to the right */
    arr[pos - 1] = element;             /* insert the new element */
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}