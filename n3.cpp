#include <iostream>
using namespace std;

int main() {
    int teman;
    double diskon, tagihan, total = 0;

    cout << "Jumlah teman: ";
    cin >> teman;

    cout << "Persentase diskon: ";
    cin >> diskon;

    for (int i = 1; i <= teman; i++) {
        cout << "Tagihan teman ke-" << i << ": ";
        cin >> tagihan;

        double bayar = tagihan - (tagihan * diskon / 100);

        cout << "Setelah diskon: " << bayar << endl;

        total += tagihan;
    }

    double potongan = total * diskon / 100;

    cout << "Total diskon: " << potongan << endl;
    cout << "Total bayar: " << total - potongan << endl;

    return 0;
}