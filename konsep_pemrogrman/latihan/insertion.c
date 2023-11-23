#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // insertion sorting
    for (int i = 1; i < 10; i++)
    {
        int j = i - 1;
        while (j > -1 && arr[i] < arr[j])
        {
            arr[i] = arr[j];
            j--;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}