#include <stdio.h>

int a[10], n;

void bubblesort(int n)
{
    int i, temp;

    if(n == 1)
        return;

    for(i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }

    bubblesort(n - 1);   
}

void main()
{
    int i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubblesort(n);   

    printf("Sorted elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
