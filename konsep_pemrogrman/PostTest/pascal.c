#include <stdio.h>

int main() {
    int tinggi, i, j;
    
    printf("Masukkan tinggi segitiga Pascal: ");
    scanf("%d", &tinggi);

    for (i = 0; i < tinggi; i++) {
        int nilai = 1;
        
        // Spasi untuk membuat tampilan segitiga
        for (j = 0; j < tinggi - i - 1; j++) {
            printf("   ");
        }
        
        // Mengisi dan mencetak nilai dalam baris saat ini
        for (j = 0; j <= i; j++) {
            printf("%6d", nilai);
            nilai = nilai * (i - j) / (j + 1);
        }
        printf("\n");  
    }

    return 0;
}
