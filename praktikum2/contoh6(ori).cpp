#include <iostream>
using namespace std;

int main(){
    int b;
    cout << "Masukan Baris : ";
    cin >> b;
    int (*array)[2];
    array = new int [b][2];

    for(int a =  0; a < 2; a++){
        for(int c = 0  ; c < b; c++){
            cout << "Masukan Array "<<"["<<a<<"]"<<"["<<c<<"] : ";
            cin >> array[a][c];
        }
    }  
    cout << "======================="<<endl;
    for(int a  =0; a < 2; a++){
        for(int c = 0; c < b; c++){
            cout << "Masukan Array "<<"["<<a<<"]"<<"["<<c<<"] : " <<array[a][c]<<endl;
        }
    }
    delete array[2];
    return 0;
}