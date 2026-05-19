#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    int jumlah, selisih;

    cout << "masukkan x : ";
    cin >> x;
    cout << "masukkan y : ";
    cin >> y;

    if (x >= 1 && x <= 99 && y >= 1 && y <= 99 && x <= y) {
        jumlah = x + y;
        selisih = abs(x - y);

        cout << jumlah << endl;
        cout << selisih << endl;
    } 
    else {
        cout << "Input tidak valid";
    }

    return 0;
}
