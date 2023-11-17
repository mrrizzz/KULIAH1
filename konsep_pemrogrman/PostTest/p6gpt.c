#include <stdio.h>
#include <string.h>

int main()
{
    char input[100], input2[100];
    printf("Masukkan kalimat 1 : ");
    fgets(input, sizeof(input), stdin);
    printf("Masukkan kalimat 2 : ");
    fgets(input2, sizeof(input2), stdin);

    // Menghapus karakter newline dari string masukan
    // input[strcspn(input, "\n")] = '\0';
    // input2[strcspn(input2, "\n")] = '\0';

    printf("cek sensitif\n");
    int banding = strcmp(input, input2);
    printf("string 1 %s string 2", banding == 0 ? "sama dengan" : (banding > 0 ? "lebih dari" : "kurang dari"));
    printf("\n");

    printf("cek non sensitif\n");
    int banding2 = stricmp(input, input2);
    printf("string 1 %s string 2", banding2 == 0 ? "sama dengan" : (banding2 > 0 ? "lebih dari" : "kurang dari"));
    printf("\n");

    return 0;
}
