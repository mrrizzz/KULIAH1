#include <stdio.h>

int main() {
    int inputmatkul, jam, totalnilai = 0, pembagi = 0, nilaiangka;
    char nilaihuruf;
    
    printf("Masukkan jumlah mata kuliah = ");
    scanf("%d", &inputmatkul);
    
    for (int i = 1; i <= inputmatkul; i++) {
        getchar(); // Membersihkan karakter newline ('\n') dari input sebelumnya
        printf("Nilai mata kuliah %d = ", i);
        scanf(" %c", &nilaihuruf);
        printf("Jumlah jam = ");
        scanf("%d", &jam);
        
        switch (nilaihuruf) {
            case 'A':
                nilaiangka = 4;
                break;
            case 'B':
                nilaiangka = 3;
                break;
            case 'C':
                nilaiangka = 2;
                break;
            case 'D':
                nilaiangka = 1;
                break;
            default:
                printf("Nilai tidak valid\n");
                i--; // Mengembalikan i agar penghitungan mata kuliah yang valid tetap benar
                continue; // Melanjutkan ke iterasi berikutnya tanpa menghitung total
        }
        
        totalnilai += (nilaiangka * jam); // Menghitung total nilai
        pembagi += jam; // Menghitung total jam
    }
    
    if (pembagi == 0) {
        printf("Tidak ada jam yang diinput.\n");
    } else {
        float nilaiakhir = (float)totalnilai / pembagi; // Menghitung nilai akhir
        printf("Nilai akhir anda adalah = %.2f\n", nilaiakhir); // Mencetak nilai akhir dengan dua desimal
    }
    
    return 0;
}
