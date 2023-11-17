#include <stdio.h>
int main(){
    int x;
    printf("Masukkan nilai harga yang harus dibayar = ");
    scanf("%d", &x);
    if (x >= 100000)
    {
      x *= 0.95;
    }
    printf("Harga yang harus anda bayar adalah %d", x);
}