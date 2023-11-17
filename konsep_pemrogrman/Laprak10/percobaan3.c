   #include<stdio.h>
int main(){
    int input, i=1, total=0, maks=0, min=0, bilakhir=0;
    float rataan;
    char pilihan;
    do
    {
        printf("masukkan bilangan ke %d = ", i);
        scanf(" %d", &input);
        printf("apakah ingin mengulang? (y/t) = ");
        scanf(" %c", &pilihan);
        bilakhir++;
        if (bilakhir == 1)
        {
            maks=min=input;
        }else{
            if (input>maks)
            {
                maks = input;
            }
            if (input<min)
            {
                min = input;
            }
        }
        i++;
        total += input;

    } while (pilihan == 'y' || pilihan == 'Y');        

    rataan = total / bilakhir;
    printf("total = %d \n", total);
    printf("minimal = %d \n", min);
    printf("maksimal = %d \n", maks);
    printf("rataan = %.2f", rataan);
}