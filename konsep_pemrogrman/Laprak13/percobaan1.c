#include<stdio.h>
void menu();//prototype
int main(){
    char jwb;
    do
    {
        menu();
        printf( "apakah anda ingin mengulang lagi? ");
        scanf(" %c", &jwb);
    } while (jwb == 'y');
}
//
void menu(){
    printf("Pilihan menu :\n");
    printf("Nasi goreng\n");
    printf("ayam goreng\n");
    printf("bebek goreng\n");
}