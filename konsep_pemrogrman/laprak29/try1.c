#include <stdio.h>
#define MAKS 20
struct date
{
    int day, month, year;
};

struct student
{
    char name[50];
    struct date birthday;
};
int main()
{
    struct student data_mhs[MAKS];
    int i = 0, jml;
    char lagi;
    do
    {
        printf("Name: ");
        fgets(data_mhs[i].name, sizeof(data_mhs[i].name), stdin);
        printf("Birthday (mm-dd-yyyy): ");
        scanf("%d-%d-%d", &data_mhs[i].birthday.month, &data_mhs[i].birthday.day, &data_mhs[i].birthday.year);
        getchar(); // hapus sisa data dlm buffer keyboard
        i++;
        printf("\nMau memasukkan data lagi [Y/T] ? ");
        lagi = getchar(); // baca tombol
        getchar();        // hapus sisa data dlm buffer keyboard
    } while (lagi == 'Y' || lagi == 'y');
    jml = i;
    printf("\nDATA MAHASISWA\n");
    for (i = 0; i < jml; i++)
    {
        printf("%d. Name : %s", i + 1, data_mhs[i].name);
        printf("\n Birthday : %d-%d-%d\n\n",
               data_mhs[i].birthday.month,
               data_mhs[i].birthday.day,
               data_mhs[i].birthday.year);
    }
    return 0;
}