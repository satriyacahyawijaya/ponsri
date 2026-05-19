#include <iostream>
using namespace std;

void printDigits(int n) {
    int temp = n, rev = 0;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    cout << "Digit-digit dari angka " << n << ": ";

    while (rev > 0) {
        cout << rev % 10 << " ";
        rev /= 10;
    }

    cout << "\n";
}

int main() {
    int angka[] = {154368, 421594, 123456};

    for (int i = 0; i < 3; i++) {
        printDigits(angka[i]);

        if (angka[i] % 9 == 0)
            cout << "Habis dibagi 9\n\n";
        else
            cout << "Tidak habis dibagi 9\n\n";
    }

    return 0;
}