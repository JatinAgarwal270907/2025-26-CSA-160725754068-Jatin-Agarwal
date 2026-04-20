#include <stdio.h>

int linearSearch(int a[], int n, int key)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            return i;
    }

    return -1;
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

    printf("Enter key: ");
    scanf("%d", &key);

    result = linearSearch(a, n, key);

    if(result != -1)
        printf("Element found at position %d", result+1);
    else
        printf("Element not found");

    return 0;
}
