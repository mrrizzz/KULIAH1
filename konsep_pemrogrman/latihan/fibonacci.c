#include <stdio.h>
int main()
{
    int count = 1, banyak, first = 0, second = 1;
    printf("masukkan banyak n = ");
    scanf("%d", &banyak);
    int next[10] = {0, 1};
    // next[0] = 0;
    // next[1] = 1;
    if (banyak >= 1)
    {
        printf("%d ", next[0]);
        count++;
    }
    if (banyak >= 2)
    {
        printf("%d ", next[1]);
        count++;
    }

    while (count <= banyak)
    {
        next[count] = first + second;
        printf("%d ", next[count]);
        first = second;
        second = next[count];
        count++;
    }
}