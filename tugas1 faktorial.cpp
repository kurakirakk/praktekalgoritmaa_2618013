#include <iostream>
using namespace std;

int main() {
    int angka;
    unsigned long long faktorial = 1;

    cout << "Masukkan angka (0-20): ";
    if (!(cin >> angka) || angka < 0 || angka > 20) {
        cout << "Input tidak valid. Masukkan bilangan bulat dari 0 sampai 20.\n";
        return 1;
    }

    if (angka == 0) {
        cout << "0! = 1\n";
        return 0;
    }

    cout << angka << "! = ";
    for (int i = 1; i <= angka; ++i) {
        faktorial *= static_cast<unsigned long long>(i);
        if (i > 1) {
            cout << " * ";
        }
        cout << i;
    }
    cout << " = " << faktorial << '\n';

    return 0;
}
