#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int teman;
    double diskon, tagihan;
    double totalBayar = 0, totalDiskon = 0;

    cout << "Jumlah teman: ";
    cin >> teman;

    cout << "Persentase diskon: ";
    cin >> diskon;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= teman; i++) {
        cout << "Tagihan teman ke-" << i << ": ";
        cin >> tagihan;

        double potongan = tagihan * diskon / 100;
        double bayar = tagihan - potongan;

        cout << "Setelah diskon: " << bayar << endl;

        totalDiskon += potongan;
        totalBayar += bayar;
    }

    cout << "\nTotal diskon: " << totalDiskon << endl;
    cout << "Total bayar: " << totalBayar << endl;

    return 0;
}