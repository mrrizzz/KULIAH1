#include <stdio.h>
#include <string.h>
struct data
{
    char nama[50];
    int tugas, uts, uas, final;
    char grade;
};
void clearScreen()
{
#ifdef _WIN32
    system("cls"); // For Windows
#else
    printf("\033[2J\033[H"); // For Linux/Unix
#endif
}
void printGaris()
{
    for (int i = 0; i < 80; i++)
    {
        printf("=");
    }
}
void printNilai(int jumlah, struct data mhs[jumlah])
{

    printf("\t\t\t\tDAFTAR NILAI \n");
    printf("\t\t\tMATAKULIAH KONSEP PEMROGRAMAN\n");
    printGaris();
    printf("\nNo.\tNama\t\t\t\t\tNilai\t\t\tGrade\n");
    printf("\tMahasiswa\t\tTugas\tUTS\tUAS\tAKHIR\t\n");
    printGaris();
    printf("\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf("%d\t%s\b", i + 1, mhs[i].nama);
        printf("\t\t\t\t%d\t%d\t%d\t%d\t\t%c\t\n", mhs[i].tugas, mhs[i].uts, mhs[i].uas, mhs[i].final, mhs[i].grade);
    }
}
int main()
{
    int jumlah;
    printf("MENGHITUNG NILAI AKHIR\nMATA KULIAH KONSEP PEMROGRAMAN\n\n");
    printf("Berapa jumlah mahasiwa ? ");
    scanf("%d", &jumlah);
    getchar();
    struct data mhs[jumlah];
    char nama[50];
    printf("Masukkan DATA Mahasiswa\n\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf("Mahasiswa ke-%d\n", i + 1);
        printf("Nama\t\t:");
        fgets(nama, sizeof(nama), stdin);
        strcpy(mhs[i].nama, nama);
        printf("Nilai tugas\t:");
        scanf("%d", &mhs[i].tugas);
        printf("Nilai uts\t:");
        scanf("%d", &mhs[i].uts);
        printf("Nilai uas\t:");
        scanf("%d", &mhs[i].uas);
        getchar();
        mhs[i].final = mhs[i].tugas * 0.2 + mhs[i].uts * 0.4 + mhs[i].uas * 0.4;
        if (mhs[i].final < 50 && mhs[i].final >= 0)
        {
            mhs[i].grade = 'E';
        }
        else if (mhs[i].final >= 50 && mhs[i].final < 60)
        {
            mhs[i].grade = 'D';
        }
        else if (mhs[i].final >= 60 && mhs[i].final < 70)
        {
            mhs[i].grade = 'C';
        }
        else if (mhs[i].final >= 70 && mhs[i].final < 80)
        {
            mhs[i].grade = 'B';
        }
        else if (mhs[i].final >= 80 && mhs[i].final <= 100)
        {
            mhs[i].grade = 'A';
        }
    }
    clearScreen();
    printNilai(jumlah, mhs);
    printf("\n");
}
