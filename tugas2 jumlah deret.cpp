#include <iostream>
using namespace std;

int main() {
    int jumlahDeret;
    int angka = 1;
    long long total = 0;

    cout << "Masukkan jumlah deret: ";
    if (!(cin >> jumlahDeret) || jumlahDeret < 1) {
        cout << "Input tidak valid. Jumlah deret harus lebih dari 0.\n";
        return 1;
    }

    cout << "Deret: ";
    while (angka <= jumlahDeret) {
        cout << angka;
        total += angka;
        if (angka < jumlahDeret) {
            cout << " + ";
        }
        ++angka;
    }

    cout << " = " << total << '\n';
    return 0;
}
