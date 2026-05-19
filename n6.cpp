#include <iostream>
using namespace std;

int main() {
    double matriks[5][6];

    cout << "Masukkan elemen matriks 5x6:\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> matriks[i][j];
        }
    }

    cout << "\nMatriks:\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSegitiga bawah:\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (j <= i)
                cout << matriks[i][j] << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }

    cout << "\nDiagonal matriks:\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == j)
                cout << matriks[i][j] << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriks 5x6 tidak memiliki invers unik.\n";

    return 0;
}