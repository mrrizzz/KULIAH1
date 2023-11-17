#include <stdio.h>
void printMatriks(int  row,int  col, int matriks[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%4d", matriks[i][j]);
        }
        printf("\n");
    }
}
void inputMatriks(int  row,int  col, int matriks[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Masukkan baris %d kolom %d = ", i+1, j+1);
            scanf("%d", &matriks[i][j]);
        }
    }
}
void penjumlahan(int row, int col, int matriks1[row][col], int matriks2[row][col], int matriks3[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matriks3[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}
void pengurangan(int row, int col, int matriks1[row][col], int matriks2[row][col], int matriks3[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matriks3[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
}
void perkalian(int row, int col, int matriks1[row][col], int matriks2[row][col], int matriks3[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matriks3[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                matriks3[i][j] += matriks1[i][k] * matriks2[k][j]; 
            }
        }
    }
}
int main(){
    int baris[2], kolom[2], operator;
    printf("Matriks1 : \nMasukkan baris = ");
    scanf("%d", &baris[0]);
    printf("Masukkan kolom = ");
    scanf("%d", &kolom[0]);
    int  matriksA[baris[0]][kolom[0]];
    inputMatriks(baris[0], kolom[0], matriksA);
    printf("Matriks2 : \nMasukkan baris = ");
    scanf("%d", &baris[1]);
    printf("Masukkan kolom = ");
    scanf("%d", &kolom[1]);
    int  matriksB[baris[1]][kolom[1]];
    inputMatriks(baris[1], kolom[1], matriksB);
    printf("Pilih operasi :\n1. +\n2. -\n3. *\n");
    scanf("%d", &operator);
    int matriksC[kolom[0]][baris[1]];
    switch (operator)
    {
    case 1:
        if (baris[0] == baris[1] && kolom[1] == kolom[0] )
        {
            penjumlahan(baris[0], kolom[0], matriksA, matriksB, matriksC);
            printf("Hasil = \n");
            printMatriks(kolom[0], baris[1], matriksC);
        }else {
            printf("baris dan kolom tidak valid");
        }
        break;       
        if (baris == kolom)
        {
            pengurangan(baris[0], kolom[0], matriksA, matriksB, matriksC);
            printf("Hasil = \n");
            printMatriks(kolom[0], baris[1],matriksC);
        }else {
            printf("baris dan kolom tidak valid");
        }
        break;
    case 3: 
        if (kolom[0] == baris[1])
        {            
            perkalian(kolom[0], baris[1], matriksA, matriksB, matriksC);
            printf("Hasil = \n"); 
            printMatriks(kolom[0], baris[1],matriksC);
        }else {
            printf("baris dan kolom tidak valid"); 
        }  
        break;
    default:
        printf("operasi tidak valid");
        break;
    }
}