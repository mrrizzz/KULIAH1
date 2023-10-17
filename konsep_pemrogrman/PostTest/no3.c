#include <stdio.h>
int biner(int x);
int pangkat(int x);
int main()
{
    int input;
    printf("masukkan bilangan biner = ");
    scanf("%d", &input);
    printf("hasil konversi adalah = %d", biner(input));
}
int biner(int x)
{
    int digit, order = 0, total = 0;
    while (x != 0)
    {
        digit = x % 10;
        x /= 10;
        if (digit == 1)
        {
            total += pangkat(order);
        }
        order++;
    }
    return total;
}
int pangkat(int x)
{
    if (x == 0)
        return 1;
    else
        return 2 * pangkat(x - 1);
}