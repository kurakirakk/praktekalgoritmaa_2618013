#include <iostream>
using namespace std;

int main() {
    int Ukuran;
    cout << "Masukkan Ukuran kotak (1-99): ";
    cin >> Ukuran;

    if (Ukuran < 1 || Ukuran > 99) {
        cout << "Ukuran tidak valid.\n";
        return 1;
    }

    int digitTerakhir = nim % 10;
    int ukuran = digitTerakhir + (digitTerakhir % 2 == 1 ? 5 : 4);

    cout << "Ukuran kotak: " << ukuran << "\n";

    for (int i = 1; i <= ukuran; i++) {
        for (int j = 1; j <= ukuran; j++) {
            if (i == j)
                cout << i << "\t";
            else
                cout << "0\t";
        }
        cout << '\n';
    }

    return 0;
}