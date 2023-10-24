#include <stdio.h>
void inputBaris(int *baris)
{
    printf("baris = ");
    scanf("%d", baris);
}
void inputKolom(int *kolom)
{
    printf("kolom = ");
    scanf("%d", kolom);
    printf("\n");
}
void inputMatriks(int baris, int kolom, int matriks[baris][kolom])
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("masukkan nilai matriks baris ke-%d, kolom ke-%d = ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }
    printf("\n");
}
void printMatriks(int baris, int kolom, int matriks[baris][kolom])
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("%4d", matriks[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row[2], col[2];
    printf("NB : Syarat perkalian matriks adalah kolom matriks pertama = baris matriks kedua\n");
    printf("Masukkan baris dan kolom matriks A : \n");
    inputBaris(&row[0]);
    inputKolom(&col[0]);
    printf("Masukkan baris dan kolom matriks B : \n");
    inputBaris(&row[1]);
    inputKolom(&col[1]);
    if (col[0] == row[1])
    {
        printf("Masukkan isi matriks A : \n");
        int matriksA[row[0]][col[0]];
        inputMatriks(row[0], col[0], matriksA);
        printf("Masukkan isi matriks B : \n");
        int matriksB[row[1]][col[1]];
        inputMatriks(row[1], col[1], matriksB);
        int matriksC[row[0]][col[1]];
        for (int i = 0; i < row[1]; i++)
        {
            for (int j = 0; j < col[0]; j++)
            {
                int elemen = 0;
                for (int k = 0; k < col[0]; k++)
                {
                    elemen += matriksA[i][k] * matriksB[k][j];
                }
                matriksC[i][j] = elemen;
            }
        }
        printf("Maka hasil perkalian matriks A : \n");
        printMatriks(row[0], col[0], matriksA);
        printf("dikali dengan matriks B : \n");
        printMatriks(row[1], col[1], matriksB);
        printf("menghasilkan matriks C : \n");
        printMatriks(row[0], col[1], matriksC);
        printf("\n");
    }
    else
    {
        printf("Input baris dan kolom tidak memenuhi syarat perkalian matriks\n");
    }
}
