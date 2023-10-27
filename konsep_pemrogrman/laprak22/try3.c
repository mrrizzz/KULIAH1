#include <stdio.h>
int bandingstrl(char kal1[100], char kal2[100])
{
    int panjang1 = 0, panjang2 = 0, asci1 = 0, asci2 = 0;
    while (kal1[panjang1] != '\0')
    {
        panjang1++;
    }
    while (kal2[panjang2] != '\0')
    {
        panjang2++;
    }
    for (int i = 0; i < panjang1 - 1; i++)
    {
        asci1 += kal1[i];  
    }
    for (int i = 0; i < panjang2 - 1; i++)
    {
        asci2 += kal2[i]; 
    }
    if (asci1 > asci2)
    {
        return 1;
    }
    else if (asci1 == asci2)
    {
        return 0;
    }
    else
        return -1;
}
int main()
{
    char input[100], input2[100];
    printf("Masukkan kalimat 1 : ");
    fgets(input, sizeof(input), stdin);
    printf("Masukkan kalimat 2 : ");
    fgets(input2, sizeof(input2), stdin);
    int banding = bandingstrl(input, input2);
    if (banding == 0)
    {
        printf("String 1 sama dengan string 2");
    }
    else if (banding == 1)
    {
        printf("String 1 lebih dari string 2");
    }
    else if (banding)
    {
        printf("string 1 kurang dari string 2");
    }
    printf("\n");
}