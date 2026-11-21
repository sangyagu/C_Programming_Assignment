//Write a program in C to insert an element at the front position of an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to insert at the front: ");
    scanf("%d", &element);
    for (i = n - 1; i >= 0; i--)
        arr[i + 1] = arr[i];            /* shift every element right */
    arr[0] = element;                   /* new element at the front */
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}