#include <stdio.h>
int main()
{
    int batas, first = 0, second = 1;
    printf("masukkan batas n = ");
    scanf("%d", &batas);
    int next[batas];
    next[0] = 0;
    next[1] = 1;
    if (batas >= 1)
    {
        printf("%d ", next[0]);
    }
    if (batas >= 2)
    {
        printf("%d ", next[1]);
    }
    if (batas >= 3)
    {
        for (int i = 2; i < batas; i++)
        {
            next[i] = first + second;
            if (next[i] >= batas)
                break;
            printf("%d ", next[i]);
            first = second;
            second = next[i];
        }
    }
}