#include <iostream>
#include <string>
using namespace std;

#define max 10

struct barang {
    string nama;
    string jumlah;
};

struct Tumpukan {
    barang data[max];
    int atas;
} T;

void awal() {
    T.atas = -1;
}

int kosong() {
    if (T.atas == -1)
        return 1;
    else
        return 0;
}

int penuh() {
    if (T.atas == max - 1)
        return 1;
    else
        return 0;
}

void input(barang data) {
    if (penuh() == 0) {
        T.atas++;
        T.data[T.atas] = data;
        cout << "Data " << data.nama << " masuk ke stack" << endl;
    } else {
        cout << "Tumpukan penuh" << endl;
    }
}

void hapus() {
    if (kosong() == 0) {
        cout << "Data " << T.data[T.atas].nama << " terambil" << endl;
        T.atas--;
    } else {
        cout << "Data kosong" << endl;
    }
}

void tampil() {
    if (kosong() == 0) {
        for (int i = T.atas; i >= 0; i--) {
            cout << "Tumpukan ke-" << i << ": " << T.data[i].nama << " - " << T.data[i].jumlah << endl;
        }
    } else {
        cout << "Tumpukan kosong" << endl;
    }
}

void bersih() {
    T.atas = -1;
    cout << "Tumpukan Kosong!" << endl;
}

int main() {
    int pil;
    barang data;
    awal();
    do {
        cout << "1. Input\n2. Hapus\n3. Tampil\n4. Bersihkan\n5. Keluar\nMasukan Pilihan: ";
        cin >> pil;
        switch (pil) {
            case 1:
                cout << "Masukan nama barang: ";
                cin >> data.nama;
                cout << "Masukan jumlah barang: ";
                cin >> data.jumlah;
                input(data);
                break;
            case 2:
                hapus();
                break;
            case 3:
                tampil();
                break;
            case 4:
                bersih();
                break;
            case 5:
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
                break;
        }
        cout << endl;
    } while (pil != 5);
    return 0;
}
