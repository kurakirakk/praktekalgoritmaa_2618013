#include <iostream>
using namespace std;

int main() {
    int ukuran;

    cout << "Segitiga Terbalik Genap\n";
    cout << "Masukkan ukuran segitiga: ";
    cin >> ukuran;

    if (ukuran < 1) {
        cout << "Ukuran harus lebih dari 0.\n";
        return 1;
    }

    int baris = ukuran;
    while (baris >= 1) {
        int kolom = 1;
        int angka = 2;

        while (kolom <= baris) {
            cout << angka;
            if (kolom < baris) {
                cout << " ";
            }
            angka += 2;
            kolom++;
        }

        cout << '\n';
        baris--;
    }

    return 0;
}