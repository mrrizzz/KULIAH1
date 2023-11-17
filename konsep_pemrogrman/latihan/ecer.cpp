#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int s =0 ;
    while (i <= 5)
    {
        s += i;
        i++;
    }
    for (int j = 0; j <= 10; j++)
    {
    s+= j;
    }
    cout << s;
    return 0;
}