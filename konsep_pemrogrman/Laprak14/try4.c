#include <stdio.h>
#define PI 3.14159f
float radian(int x);
int main()
{
    int sudut;
    float rad;
    printf("masukkan sudut (derajat)= ");
    scanf("%d", &sudut);
    rad = radian(sudut);
    printf("derajat dalam radian = %.3f", rad);
}
float radian(int x)
{
    return x * PI / 180.0f;
}