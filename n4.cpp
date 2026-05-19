#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "masukkan x : ";
    cin >> x;
    cout << "masukkan y : ";
    cin >> y;

    if (x >= 1 && y <= 99 && x <= y) {
        int total = x + y;
        int beda = y - x;

        cout << total << "\n";
        cout << beda;
    } 
    else {
        cout << "Mohon masukkan nilai yang benar";
    }

    return 0;
}