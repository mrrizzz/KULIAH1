#include <stdio.h>
int main(){
    int input, hasil=0;
    printf("masukkan angka = ");
    scanf("%d", &input);
    for (int i = input; i > 0; i--)
    { 
        hasil += i;
        if (i != 1)
        {
            printf("%d + ", i);
        }else{
            printf("%d = ", i);
        }
    }     
    printf("%d ", hasil);
}