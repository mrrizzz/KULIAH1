#include<iostream>
using namespace std;
void walik();
int main(){
    string kalimat;
    char kal[100];
    printf("masukkan kalimat = ");
    walik();
    printf("\n");
}
bool walik(string kal){
    char x;

    scanf("%c", &x);
    if(x != '\n'){
        walik ();
    }
    if(x != '\n')
    printf("%c", x);
}