#include <stdio.h>
int main (){
    int suhu;
    printf("Masukkan harga suhu = ");
    scanf("%d", &suhu);
    if (suhu > 100)
    {
        printf("Benda berbentuk gas");
    } else if (suhu<100 && suhu>0)
    {
        printf("Benda berbentuk cair");
    } else {
        printf("Benda berbentuk padat");
    }
}