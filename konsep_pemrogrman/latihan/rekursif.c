#include <stdio.h>
int sum(int x)
{
    return x == 1 ? 1 : (x += sum(x - 1));
}
int main()
{
    int hasil = sum(3);
    printf("%d", hasil);
    printf("\n");
}
