#include <iostream>
using namespace std;

struct barang
{
    string nama;
    int jumlah;
};

int main()
{
    int data;

    cout << "Masukkan Jumlah Data Yang Mau di Inputkan : ";
    cin >> data;
    cout << endl;

    barang new_barang[data];

    for (int i = 0; i < data; i++)
    {
        cout << "Barang ke-" << i + 1 << endl;

        cout << "Nama Barang : ";
        cin >> new_barang[i].nama;

        cout << "Jumlah : ";
        cin >> new_barang[i].jumlah;
        cout << endl;
    }

    for (int i = 0; i < data; i++)
    {
        cout << "==================================" << endl;
        cout << "Barang ke-" << i + 1 << endl;
        cout << "Nama Barang: " << new_barang[i].nama << endl;
        cout << "Jumlah: " << new_barang[i].jumlah << endl;
        cout << "==================================" << endl;
    }
}
