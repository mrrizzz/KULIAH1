#include<stdio.h>
int main(){
    int inputmatkul, jam, totalnilai=0, pembagi=0, nilaiangka  ;
    char nilaihuruf;
    printf("Masukkan jumlah mata kuliah = ");
    scanf("%d", &inputmatkul);
    for (int i = 1; i <= inputmatkul; i++)
    {
        printf("Nilai mata kuliah %d = ", i);
        scanf(" %c", &nilaihuruf);
        printf("jumlah jam = ");
        scanf("%d", &jam);

        switch (nilaihuruf)
        {
        case 'A':
            nilaiangka = 4;
            break;
        case 'B' :
            nilaiangka = 3;
            break;
        case 'C':
            nilaiangka = 2;
            break;
        case 'D' :
            nilaiangka =  1;
            break;
        default :
            printf("nilai tidak valid\n");
            i--;
            continue;
        }
        totalnilai += (nilaiangka * jam);
        pembagi += jam;
    }
    float nilaiakhir = (float)totalnilai/pembagi;
    printf("nilai akhir anda adalah = %.2f",nilaiakhir );
}
