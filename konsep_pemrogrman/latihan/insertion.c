#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    // insertion sorting
    for (int i = 1; i < 4; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j > -1 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
}