#include <stdio.h>
#include <string.h>
struct date
{
    int tgl, bln, thn;
};
typedef struct date tanggalan;
struct data
{
    int id;
    char nama[50];
    tanggalan ttl;
    char gender[20];
    int gajiperbulan;
};
typedef struct data pegawai;
void input(int jumlah, pegawai *emp)
{
    for (int i = 0; i < jumlah; i++)
    {
        printf("Data pegawai ke-%d\n", i + 1);
        printf("Nama\t\t\t: ");
        getchar();
        fgets(emp[i].nama, sizeof(emp[i].nama), stdin);
        printf("Tgl lahir <dd-mm-yy>\t: ");
        scanf("%d-%d-%d", &emp[i].ttl.tgl, &emp[i].ttl.bln, &emp[i].ttl.thn);
        printf("Jenis kelamin [L/P]\t: ");
        scanf("%s", emp[i].gender);
        getchar();
        printf("Gaji/bulan\t\t: ");
        scanf("%d", &emp[i].gajiperbulan);
    }
}
void output(int jumlah, pegawai *emp)
{
    printf("Data pegawai yang telah diinputkan\n\n");
    for (int i = 0; i < jumlah; i++)
    {

        if (strcmp(emp[i].gender, "l") == 0 || strcmp(emp[i].gender, "L") == 0)
        {
            strcpy(emp[i].gender, "Laki-laki");
        }
        else if (strcmp(emp[i].gender, "p") == 0 || strcmp(emp[i].gender, "P") == 0)
        {
            strcpy(emp[i].gender, "Perempuan");
        }
        else
            strcpy(emp[i].gender, "invalid gender");
        printf("Data pegawai ke-%d\n", i + 1);
        printf("Nama\t\t\t: %s", emp[i].nama);
        printf("Tanggal lahir\t\t: %02d-%02d-%d\n", emp[i].ttl.tgl, emp[i].ttl.bln, emp[i].ttl.thn);
        printf("Jenis kelamin\t\t: %s\n", emp[i].gender);
        printf("Gaji/bulan\t\t: Rp.%d\n", emp[i].gajiperbulan);
    }
}
int main()
{
    int jumlah;
    printf("Berapa jumlah pegawai ? ");
    scanf("%d", &jumlah);
    pegawai emp[jumlah];
    input(jumlah, &emp);
    printf("\n");
    output(jumlah, &emp);
}