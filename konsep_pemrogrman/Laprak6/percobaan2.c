#include <stdio.h>
int main (){
    int na, nk, np;
    printf("Masukkan nilai tes akademik = ");
    scanf("%d", &na);
    printf("Masukkan nilai tes ketrampilan = ");
    scanf("%d", &nk);
    printf("Masukkan nilai tes psikologi = ");
    scanf("%d", &np);
    if ((na + np + nk)/3 >= 75) {
        printf("Peserta LULUS\n");
        if (na > np && na > nk){
           printf("Peserta ditempatkan di bagian administrasi");
            }else if (nk > na && nk > np){
           printf("Peserta ditempatkan di bagian Produksi");
            }else {
            printf("Peserta ditempatkan di bagian Pemasaran"); 
        }
        } else {("peserta tidak lulus");
    }
}