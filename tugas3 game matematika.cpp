#include <iostream>
using namespace std;

int main() {
    int level = 1;
    int jawaban;

    cout << "=== GAME MATEMATIKA ===\n";

    do {
        const int hasilBenar = level + (level * 5);

        cout << "\nLevel " << level << '\n';
        cout << "Berapa hasil dari " << level << " + " << (level * 5) << "? ";

        if (!(cin >> jawaban)) {
            cout << "Game Over\n";
            return 1;
        }

        if (jawaban != hasilBenar) {
            cout << "Game Over\n";
            return 0;
        }

        cout << "Benar! Naik level!\n";
        ++level;
    } while (level <= 5);

    cout << "Selamat! Kamu menyelesaikan semua level!\n";
    return 0;
}
