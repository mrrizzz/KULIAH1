#include <stdio.h>

int main() {
    int bil1, bil2, bil3, temp;
    printf("Masukkan bilangan 1: ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan 2: ");
    scanf("%d", &bil2);
    printf("Masukkan bilangan 3: ");
    scanf("%d", &bil3);

    if (bil1 > bil2) {
        temp = bil1;
        bil1 = bil2;
        bil2 = temp;
    }
    if (bil2 > bil3) {
        temp = bil2;
        bil2 = bil3;
        bil3 = temp;
    }
    if (bil1 > bil2) {
        temp = bil1;
        bil1 = bil2;
        bil2 = temp;
    }
    printf("Urutan bilangan setelah diurutkan adalah: %d %d %d", bil1, bil2, bil3);
    return 0;
}
