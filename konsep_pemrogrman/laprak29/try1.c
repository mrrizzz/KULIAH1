#include <stdio.h>
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
    int jmlh_mhs;
    printf("Masukkan jumlah mahasiswa = ");
    scanf("%d", &jmlh_mhs);
    struct student data_mhs[jmlh_mhs];
    printf("masukkan data mahasiswa : \n");
    for (int i = 0; i < jmlh_mhs; i++)
    {
        printf("Nama = ");
        scanf("%s", data_mhs[i].name);
        fflush(stdin);
        printf("TTL (dd-mm-yyyy) = ");
        scanf("%d-%d-%d", &data_mhs[i].birthday.day, &data_mhs[i].birthday.month, &data_mhs[i].birthday.year);
    }
    for (int i = 0; i < jmlh_mhs; i++)
    {
        printf("nama : %s\n", data_mhs[i].name);
        printf("TTL = %d-%d-%d\n", data_mhs[i].birthday.day, data_mhs[i].birthday.month, data_mhs[i].birthday.year);
    }
}
// int main()
// {
//     char lagi;
//     do
//     {
//         int i = 0;
//         printf("Name: ");
//         gets(data_mhs[i].name);
//         printf("Birthday (dd-mm-yyyy): ");
//         scanf("%d-%d-%d", &data_mhs[i].birthday.day, &data_mhs[i].birthday.month, &data_mhs[i].birthday.year);
//         printf("Birthday: %d-%d-%d\n", data_mhs[i].birthday.day, data_mhs[i].birthday.month, data_mhs[i].birthday.year);
//         // Add code here to ask the user if they want to continue
//     } while (lagi == 'y' || lagi == 'Y');
//     return 0;
// }