#include<stdio.h>
int main(){
    int x, z, a, b, c;
    float y;
    printf("Masukkan nilai x = ");
    scanf("%d", &x);
    printf("Masukkan nilai b = ");
    scanf("%d", &b);
    printf("Masukkan nilai c = ");
    scanf("%d", &c);
    y = b * x * c + 0.5 * x - c;
    printf("Nilai y = %.2f \n", y);
    printf("Masukkan nilai x = ");
    scanf("%d", &x);
    printf("Masukkan nilai z = ");
    scanf("%d", &z);
    printf("Masukkan nilai a = ");
    scanf("%d", &a);
    y = (0.3 * x * z) / (2 * a);
    printf("Nilai y = %.2f", y);
}