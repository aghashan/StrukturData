#include <iostream> 
#include <curses.h>

using namespace std;
void tukarvalue(int *x, int *y);

int main(){
    int a,b;
    cout << "Passing By Value\n";
    cout << "\n\n";
    cout << "Inputkan nilai a = ";
    cin >> a;
    cout << "Inputkan nilai b = ";
    cin >> b;
    
    cout << "\nNilai Sebelum Pemangggilan Fungsi\n";
    cout << "a = "<<a<<" b = "<<b;

    tukarvalue(&a,&b);

    cout << "\nNilai Setelah Pemanggilan Fungsi\n";
    cout << "a = "<<a<<" b = "<<b;
    wgetch;
}

void tukarvalue(int *x, int *y){
    int z;

    z = *x;
    *x = *y;
    *y = z;
    
    cout << "\nNilai Diakhir Fungsi tukar () \n";
    cout << "x = "<<*x<<" y = "<<*y;
}
