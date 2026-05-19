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

        cout << "Judul film " << i+1 << " : ";
        getline(cin, film[i].judul);

        cout << "Genre film : ";
        getline(cin, film[i].genre);

        cout << "Tahun film : ";
        cin >> film[i].tahun;

        cin.ignore();

        cout << endl;
    }

    cout << "Daftar film favorit\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Film ke-" << i + 1 << endl;
        cout << "Judul : " << film[i].judul << endl;
        cout << "Genre : " << film[i].genre << endl;
        cout << "Tahun : " << film[i].tahun << endl;
        cout << endl;
    }

    return 0;
}