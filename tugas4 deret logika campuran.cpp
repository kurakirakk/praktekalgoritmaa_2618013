#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah angka: ";
    if (!(cin >> n) || n < 1) {
        cout << "Input tidak valid. Masukkan bilangan bulat lebih dari 0.\n";
        return 1;
    }

    cout << "Deret campuran: ";
    for (int angka = 1; angka <= n; ++angka) {
        if (angka % 2 == 0) {
            cout << static_cast<long long>(angka) * 2;
        } else if (angka % 3 == 0) {
            cout << angka + 3;
        } else {
            cout << angka;
        }

        if (angka < n) {
            cout << ' ';
        }
    }
    cout << '\n';

    return 0;
}
