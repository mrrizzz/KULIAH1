#include <stdio.h>
int f_to_i(int ft);
float cm_to_m(int cm);
float i_to_cm(int inch);
int main()
{
    int feet;
    float meter;
    printf("Masukkan satuan kaki = ");
    scanf("%d", &feet);
    meter = cm_to_m(feet);
    printf("konversi = %.3f\n", meter);
}
int f_to_i(int ft)
{
    int inch = ft * 12;
    return inch;
}
float i_to_cm(int inch)
{
    inch = f_to_i(inch);
    float cm = inch * 2.54;
    return cm;
}
float cm_to_m(int cm)
{
    cm = i_to_cm(cm);
    float m = cm / 100.0;
    return m;
}