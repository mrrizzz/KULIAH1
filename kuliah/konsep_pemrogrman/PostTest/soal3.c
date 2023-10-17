#include <stdio.h>
int main(){
    int bulan, tgl;
    printf("masukkan bulan dan tanggal lahir = (bulan tanggal)");
    scanf("%d %d", &bulan, &tgl);
    switch (bulan)
    {
    case 1 :
        if (tgl >= 20 && tgl < 31)
        {
            printf("zodiak anda aquarius");
        }else if (tgl >= 1 && tgl < 20){
            printf("zodiak anda carpicorn");
        }
        else{ printf("input tidak valid");}
        break;
    case 2 :
        if (tgl >= 1 && tgl <= 18)
        {
            printf("zodiak anda aquarius");
        }else if (tgl >= 19 && tgl <= 28){
            printf("zodiak anda Pisces");
        }else {printf("input tidak valid");}
        break;
    case 3 :
        if (tgl >= 1 && tgl <= 20)
        {
            printf("zodiak anda Pisces");
        }else if (tgl > 20 && tgl <= 31){
            printf("zodiak anda Aries");
        }else {printf("input tidak valid");}
        break;
    case 4:
        if (tgl >= 1 && tgl <= 19)
        {
            printf("zodiak anda Aries");
        }else if (tgl > 19 && tgl <= 30){
            printf("zodiak anda taurus");
        }else {printf("input tidak valid");}
        break;        
    case 5:
        if (tgl >= 1 && tgl <= 21)
        {
            printf("zodiak anda Taurus");
        }else if (tgl > 21 && tgl <= 31){
            printf("zodiak anda Gemini");
        }else {printf ("input tidak valid");}
        break;
    case 6:
        if (tgl >= 1 && tgl <= 21)
        {
            printf("zodiak anda Gemini");
        }else if (tgl > 21 && tgl <= 30){
            printf("zodiak anda Cancer");
        }else {printf("input tidak valid");}
        break;
    case 7:
        if (tgl >= 1 && tgl <= 22)
        {
            printf("zodiak anda Cancer");
        }else if (tgl > 22 && tgl <= 31){
            printf("zodiak anda Leo");
        }else {printf("input tidak valid");}
        break;
    case 8:
        if (tgl >= 1 && tgl <= 22)
        {
            printf("zodiak anda Leo");
        }else if (tgl > 22 && tgl <= 31){
            printf("zodiak anda Virgo");
        }else {printf("input tidak valid");}
        break;
    case 9:
        if (tgl >= 1 && tgl <= 22)
        {
            printf("zodiak anda virgo");
        }else if (tgl > 22 && tgl <= 30){
            printf("zodiak anda libra");
        }else {printf("input tidak valid");}
        break;
    case 10:
        if (tgl >= 1 && tgl <= 22)
        {
            printf("zodiak anda libra libra");
        }else if (tgl > 22 && tgl <= 31){
            printf("zodiak anda scorpio");
        }else {printf("input tidak valid");}
        break;
    case 11:
        if (tgl >= 1 && tgl <= 22)
        {
            printf("zodiak anda scorpio");
        }else if (tgl > 22 && tgl <= 30){
            printf("zodiak anda sagitarius");
        }else {printf("input tidak valid");}
        break;       
    case 12 :
        if (tgl >= 1 && tgl <= 21)
        {
            printf("zodiak anda sagitarius");
        }else if (tgl > 21 && tgl <= 31){
            printf("zodiak anda carpircorn");
        }else {printf("input tidak valid");}
        break;
    default:
        printf("input tidak valid");
        break;
    }
}