#include <stdio.h>
int main (){
    int input, hasil, i;
    printf("Masukkan bilangan = ");
    scanf("%d", &input);
    for ( i = 1; i <= input; i++)
    {
        if (i % 2 == 0)
        {
            hasil = -1 * i;
            printf("%d ", hasil);
        }else{
            printf("%d ", i);
        }   
    }
}