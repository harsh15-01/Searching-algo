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
int binarysearch(int a[], int n, int key)
{
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
    int sz, key;
    printf("Enter the size of array: ");
    scanf("%d", &sz);
    int randArray[sz], i;
    for (i = 0; i < sz; i++)
        randArray[i] = rand() % 100; // Generate number between 0 to 99
    print(randArray, sz);
    sort(randArray, sz);
    printf("after sorting- \n");
    print(randArray, sz);
    key = rand() % sz;
    printf("the random generated key is- %d \n", randArray[key]);
    int s = randArray[key];
    int result = binarysearch(randArray, sz, s);
    if (result == -1)
        printf("element not found ");
    else
        printf("element found at position: %d", result + 1);
}
