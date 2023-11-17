#include <stdio.h>
#include <string.h>
int main()
{
    char input[100], input2[100];
    printf("Masukkan kalimat 1 : ");
    fgets(input, sizeof(input), stdin);
    printf("Masukkan kalimat 2 : ");
    fgets(input2, sizeof(input2), stdin);
    printf("cek sensitif\n");
    int banding = strcmp(input, input2);
    printf("string 1 %s string 2", banding == 0 ? "sama dengan" : banding == 1 ? "lebih dari"
                                                                               : "kurang dari");
    printf("\n");
    printf("cek non sensitif\n");
    int banding2 = strcmpi(input, input2);
    printf("string 1 %s string 2", banding == 0 ? "sama dengan" : banding == 1 ? "lebih dari"
                                                                               : "kurang dari");
    printf("\n");
}