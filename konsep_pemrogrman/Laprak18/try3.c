#include <stdio.h>
#define MAKS 2
void penjumlahanMatriks(int matriks1[MAKS][MAKS], int matriks2[MAKS][MAKS], int matriks3[MAKS][MAKS]);
void matriks(int matriks[MAKS][MAKS]);
void printMatriks(int matriks[MAKS][MAKS]);
int main()
{
    int matriksA[MAKS][MAKS], matriksB[MAKS][MAKS], matriksC[MAKS][MAKS];
    printf("masukkan matriks A : \n");
    matriks(matriksA);
    printf("masukkan matriks B : \n");
    matriks(matriksB);
    penjumlahanMatriks(matriksA, matriksB, matriksC);
    printf("Matriks A : \n");
    printMatriks(matriksA);
    printf("Matriks B : \n");
    printMatriks(matriksB);
    printf("Matriks C (Matriks A + Matriks B) : \n");
    printMatriks(matriksC);
}
void matriks(int matriks[MAKS][MAKS])
{
    for (int i = 0; i < MAKS; i++)
    {
        for (int j = 0; j < MAKS; j++)
        {
            printf("masukkan nilai matriks baris ke-%d, kolom ke-%d = ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }
}
void penjumlahanMatriks(int matriks1[MAKS][MAKS], int matriks2[MAKS][MAKS], int matriks3[MAKS][MAKS])
{
    for (int i = 0; i < MAKS; i++)
    {
        for (int j = 0; j < MAKS; j++)
        {
            matriks3[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}
void printMatriks(int matriks[MAKS][MAKS])
{
    for (int i = 0; i < MAKS; i++)
    {
        for (int j = 0; j < MAKS; j++)
        {
            printf("%4d", matriks[i][j]); 
        }
        printf("\n");
    }
}
