#include <iostream>
#include <curses.h>

using namespace std;
int main(void){
    int a[5] = {5,4,3,2,1};
    int *p;
    int i;

    cout << "Akses Array Menggunakan Index\n";
    for(i = 0; i < 5; i++){
        cout << "Elemen a ke-"<<i<<" : " <<a[i];
        cout << "\n";
    }
    cout << "Akses Arrray Menggunkan Pointer\n";
    p = &a[0];
    for(i = 0; i < 5; i++){
        cout << "Elemen a ke-"<<i<<" : "<<*p;
        p++;
        cout << "\n";
    }
    wgetch;
}