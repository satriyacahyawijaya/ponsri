#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Titik {
    double x, y, z;
};

double hitungJarak(Titik a, Titik b) {
    return sqrt(
        pow(a.x - b.x, 2) +
        pow(a.y - b.y, 2) +
        pow(a.z - b.z, 2)
    );
}

int main() {

    Titik acuan;
    acuan.x = 6;
    acuan.y = 7;
    acuan.z = 8;

    int jumlahTitik = 3;
    vector<Titik> daftarTitik(jumlahTitik);

    cout << "Masukkan koordinat (x y z) untuk setiap titik:\n";

    for (int i = 0; i < jumlahTitik; ++i) {
        cout << "Titik ke-" << i + 1 << ": ";
        cin >> daftarTitik[i].x
            >> daftarTitik[i].y
            >> daftarTitik[i].z;
    }

    cout << "\nHasil Jarak ke Titik Acuan ("
         << acuan.x << ", "
         << acuan.y << ", "
         << acuan.z << "):\n";

    for (int i = 0; i < jumlahTitik; ++i) {
        double jarak = hitungJarak(daftarTitik[i], acuan);

        cout << "Titik ke-" << i + 1
             << ": " << jarak << "\n";
    }

    return 0;
}