#include <iostream>
using namespace std;

struct Film {
    string judul;
    string genre;
    int tahun;
};

int main() {
    Film film[5];

    cout << "Masukkan 5 film favorit\n\n";

    for (int i = 0; i < 5; i++) {
        cin.ignore();

        cout << "Judul film : ";
        getline(cin, film[i].judul);

        cout << "Genre film : ";
        getline(cin, film[i].genre);

        cout << "Tahun film : ";
        cin >> film[i].tahun;

        cout << endl;
    }

    cout << "\nDaftar film favorit:\n\n";

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". ";
        cout << film[i].judul << " - ";
        cout << film[i].genre << " (";
        cout << film[i].tahun << ")" << endl;
    }

    return 0;
}