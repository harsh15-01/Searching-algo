#include <stdio.h>
#include <stdlib.h>
int reverse(int a[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("enter the size of array- ");
    scanf("%d", &n);
    int a[n];
    printf("enter array elements- ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("array before reversing- \n");
    printarray(a, n);
    reverse(a, n);
    printf("array after reversing- \n");
    printarray(a, n);
}
