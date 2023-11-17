#include <stdio.h>
int pjgstr(char kal[100])
{
    int panjang = 0, asci = 0;
    while (kal[panjang] != '\0')
    {
        panjang++;
    }
    return panjang - 1;
}
int bandingstrl(char kal1[100], char kal2[100])
{
    int panjang1 = pjgstr(kal1), panjang2 = pjgstr(kal2), asci1 = 0, asci2 = 0;
    for (int i = 0; i <= panjang1 - 1; i++)
    {
        kal1[i] = (kal1[i] >= 'A' && kal1[i] <= 'Z') ? kal1[i] + 32 : kal1[i];
        asci1 += kal1[i];
    }
    for (int i = 0; i <= panjang2 - 1; i++)
    {
        kal2[i] = (kal2[i] >= 'A' && kal2[i] <= 'Z') ? kal2[i] + 32 : kal2[i];
        asci2 += kal2[i];
    }
    return asci1 > asci2 ? 1 : asci1 == asci2 ? 0
                                              : -1;
}
int main()
{
    char input[100], input2[100];
    printf("Masukkan kalimat 1 : ");
    fgets(input, sizeof(input), stdin);
    printf("Masukkan kalimat 2 : ");
    fgets(input2, sizeof(input2), stdin);
    int banding = bandingstrl(input, input2);
    printf("string 1 %s string 2", banding == 0 ? "sama dengan" : banding == 1 ? "lebih dari"
                                                                               : "kurang dari");
    printf("\n");
}