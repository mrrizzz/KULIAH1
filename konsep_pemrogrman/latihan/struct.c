#include <stdio.h>
typedef struct
{
    double x, y;
} point;
int main()
{
    point titik;
    printf("Masukkan 2 titik : ");
    scanf("%lf, %lf", &titik.x, &titik.y);
}