#include <stdio.h>
int main(){
    int bil, i, faktor=0;
    printf("masukkan bil = ");
    scanf("%d", &bil);
    if (bil >= 2)
        {
        for ( i = 2; i<= bil/2; i++)
        {
            if (bil % i == 0){
            faktor ++;
            }
        }if (faktor == 0)
        {
            printf("%d adalah bil prima", bil);
        }else {
            printf("%d bukan bilangan prima", bil);
        }
    }else {printf("tidak valid");
    }
}