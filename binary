#include <stdio.h>
#include <stdlib.h>
void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int binarysearch(int a[], int n)
{
    int key;
    printf("enter element to be searched: ");
    scanf("%d", &key);
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            end = mid - 1;

        else
            start = mid + 1;
    }
    return -1;
}
void main()
{
    int a[10] = {23, 12, 44, 6, 1, 4, 0, 20, 11, 5};
    print(a, 10);
    printf("after sorting \n");
    sort(a, 10);
    print(a, 10);
    int result = binarysearch(a, 10);
    if (result == -1)
        printf("element not found ");
    else
        printf("element found at position: %d", result);
}
