#include <iostream>
#include <cstdlib>
#define max 5

using namespace std;

struct barang
{
    string nomor;
    string nama;
};

struct QUEUE
{
    barang data[max];
    int head;
    int tail;
} antrian;

void init()
{
    antrian.head = 0;
    antrian.tail = 0;
}

bool kosong()
{
    if (antrian.tail == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool penuh()
{
    if (antrian.tail == max)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void tampilData()
{
    if (!kosong())
    {
        for (int i = antrian.head; i <= antrian.tail - 1; i++)
        {
            cout << antrian.data[i].nomor << " | " << antrian.data[i].nama;
        }
    }

    cout << "\n";
}

void enqueue()
{
    tampilData();
    barang data;
    if (!penuh())
    {
        cout << "Nomor Barang : ";
        cin >> data.nomor;
        antrian.data[antrian.tail].nomor = data.nomor;
        cout << "Nama Barang : ";
        cin >> data.nama;
        antrian.data[antrian.tail].nama = data.nama;
        antrian.tail++;

        tampilData();
        cout << "Data telah ditambahkan = ";
    }
    else
    {
        cout << "Antrian sudah penuh!! ";
    }
    getchar();
}

void dequeue()
{
    tampilData();
    if (!kosong())
    {
        cout << "Mengambil nomor \n"
             << antrian.data[antrian.head].nomor << ".." << endl;
        cout << "Mengambil nama \n"
             << antrian.data[antrian.head].nama << ".." << endl;
        for (int i = antrian.head; i < antrian.tail; i++)
        {
            antrian.data[i] = antrian.data[i + 1];
        }
        antrian.tail--;
    }
    else
    {
        cout << "Antrian kosong";
    }
    getchar();
}

int main()
{
    int pil;
    do
    {
        tampilData();
        cout << "Menu Utama\n";
        cout << "----------\n";
        cout << "[1] Init\n";
        cout << "[2] Enqueue\n";
        cout << "[3] Dequeue\n";
        cout << "[4] Tampil\n";
        cout << "[0] Keluar\n";
        cout << "-----------\n";
        cout << "Masukan pilihan : ";
        cin >> pil;

        switch (pil)
        {
        case 1:
            init();
            break;
        case 2:
            enqueue();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            tampilData();
        }
    } while (pil != 0);
    return 0;
}