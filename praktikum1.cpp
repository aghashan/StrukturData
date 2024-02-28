#include <iostream>
using namespace std;

int main(){
    int b;
    cout << "Masukan Nilai Array : ";
    cin >> b ;

    int nilai[b];

    for ( int i = 0; i < b; i++){
        cout << "Masukan Nilai Data ke-" << i+1 <<" : ";
        cin >> nilai[i];
    }

    for ( int n = 0; n < b; n++){
        cout << "Data ke-" << n+1 << " : " << nilai[n] <<  endl;
    }
}
