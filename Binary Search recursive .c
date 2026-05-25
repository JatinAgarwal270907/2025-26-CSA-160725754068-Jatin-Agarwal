#include <stdio.h>

int binarySearch(int a[], int low, int high, int key)
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(a[mid] == key)
        return mid;

    if(key < a[mid])
        return binarySearch(a, low, mid - 1, key);

    return binarySearch(a, mid + 1, high, key);
}

int main()
{
    int n, i, key, result;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    result = binarySearch(a, 0, n - 1, key);

    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at position %d", result + 1);

    return 0;
}
