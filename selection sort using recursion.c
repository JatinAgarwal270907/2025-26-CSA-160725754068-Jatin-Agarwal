#include <stdio.h>

void selectionSort(int a[], int n,int j)
{
    if(j==n-1)
        return;

    int i, min = j, temp;

  
    for(i = j+1; i < n; i++)
    {
        if(a[i] < a[min])
        {
            min = i;
        }
    }

   
    temp = a[j];
    a[j] = a[min];
    a[min] = temp;

   
    selectionSort(a,n,j+1);
}

int main()
{
    int a[10], n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    selectionSort(a, n,0);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
