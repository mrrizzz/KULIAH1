#include<stdio.h>
int main(){
    char kalimat;
    int jumlah_karakter = 0, jumlah_spasi = 0;
    printf("Masukkan kalimat : ");
    while (kalimat != '\n')
    {
        scanf("%c",&kalimat);
        jumlah_karakter++;
        if (kalimat == 32)
        {
            jumlah_spasi++;
        } 
    }
    printf("jumlah karakter ada %d \n", jumlah_karakter -= jumlah_spasi + 1);
    printf("jumlah spasi ada %d", jumlah_spasi);
}