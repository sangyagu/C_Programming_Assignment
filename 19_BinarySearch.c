//Write a program in C to read an array and search for a given element using Binary Search.
#include <stdio.h>
int main()
{
    int arr[100], n, i, key, low, high, mid, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;         /* middle element */
        if (arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if (key < arr[mid])
            high = mid - 1;             /* search in left half */
        else
            low = mid + 1;              /* search in right half */
    }
    if (found == 1)
        printf("Element %d found at position %d.\n", key, mid + 1);
    else
        printf("Element %d not found in the array.\n", key);
    return 0;
}