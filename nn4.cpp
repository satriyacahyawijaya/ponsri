#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    int tahun;
    int harga;
};

int main() {
    Buku b[5], temp;

    cout << "Data 5 Buku\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Judul Buku " << i << " : ";
        cin >> b[i].judul;

        cout << "Penulis    : ";
        cin >> b[i].penulis;

        cout << "Tahun      : ";
        cin >> b[i].tahun;

        cout << "Harga      : ";
        cin >> b[i].harga;

        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (b[i].harga > b[j].harga) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    cout << "\nDaftar Buku Setelah Diurutkan\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Buku ke-" << i + 1 << endl;
        cout << "Judul   : " << b[i].judul << endl;
        cout << "Penulis : " << b[i].penulis << endl;
        cout << "Tahun   : " << b[i].tahun << endl;
        cout << "Harga   : " << b[i].harga << endl;
        cout << endl;
    }

    return 0;
}
