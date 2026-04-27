#include <stdio.h>

int linearSearch(int a[], int n, int key)
{
    if(n == 0)
        return -1;

    if(a[n-1] == key)
        return n-1;

    return linearSearch(a, n-1, key);
}

int main()
{
    int n, i, a[10], key, result;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    
    printf("Enter element to search: ");
    scanf("%d", &key);

    
    result = linearSearch(a, n, key);

    
    if(result == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", result + 1);

    return 0;
}
