#include <iostream>
using namespace std;

int main() {
    double matriks[3][3];

    cout << "Masukkan elemen matriks 3x3:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "masukkan matriks[" << i+1 << "][" << j+1 << "] : ";
            cin >> matriks[i][j];
        }
    }

    cout << "\nMatriks:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSegitiga bawah:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j <= i)
                cout << matriks[i][j] << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }

    cout << "\nDiagonal matriks:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j)
                cout << matriks[i][j] << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }

    return 0;
}