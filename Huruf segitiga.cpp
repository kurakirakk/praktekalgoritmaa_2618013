#include <iostream>
using namespace std;

int main() {
    int ukuran;

    cout << "Segitiga Siku-siku Huruf \n";
    cout << "Masukkan ukuran segitiga siku-siku: ";
    cin >> ukuran;

    if (ukuran < 1 || ukuran > 26) {
        cout << "Ukuran antara 1 sampai 26.\n";
        return 1;
    }

    int baris = 1;
    do {
        int kolom = 1;

        do {
            cout << static_cast<char>('A' + kolom - 1);
            if (kolom < baris) {
                cout << " ";
            }
            kolom++;
        } while (kolom <= baris);

        cout << '\n';
        baris++;
    } while (baris <= ukuran);

    return 0;
}