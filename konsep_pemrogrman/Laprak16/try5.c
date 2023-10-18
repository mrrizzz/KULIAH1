#include <stdio.h>
int masukan(int banyakdata);
int average(int banyakdata, int total);
int main()
{
    int banyakData, total;
    printf("Masukkan banyak data = ");
    scanf("%d", &banyakData);
    total = masukan(banyakData);
    printf("rata rata = %d\n", average(banyakData, total));
}
int masukan(int banyakdata)
{
    int data[banyakdata], total = 0;
    for (int i = 0; i < banyakdata; i++)
    {
        printf("Masukkan data ke-%d : ", i + 1);
        scanf(" %d", &data[i]);
        total += data[i];
    }
    return total;
}
int average(int banyakdata, int total)
{
    return total / banyakdata;
}