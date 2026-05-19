#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double tinggiAwal;
    double g = 9.8;

    cout << "Masukkan tinggi awal: ";
    cin >> tinggiAwal;

    double waktu = 0;
    double tinggi = tinggiAwal;
    int nomor = 1;

    cout << "\nNo\tWaktu\tTinggi\n";

    while (tinggi >= 0) {
        cout << nomor << "\t";
        cout << waktu << "\t";
        cout << tinggi << endl;

        waktu = waktu + 1;
        tinggi = tinggiAwal - (0.5 * g * waktu * waktu);

        nomor++;
    }

    double totalWaktu = sqrt((2 * tinggiAwal) / g);

    cout << "\nBenda menyentuh tanah dalam ";
    cout << totalWaktu << " detik\n";

    return 0;
}