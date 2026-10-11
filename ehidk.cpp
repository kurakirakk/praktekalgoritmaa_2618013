#include <iostream>
#include <limits>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "\nSooo I dont Know What is this Uwu \n";
        cout << "1. Kelulusan Mahasiswa\n";
        cout << "2. Konversi Suhu\n";
        cout << "3. Volume Tabung\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int nilai1, nilai2;

            cout << "dua digit NIM mahasiswa: ";
            cin >> nilai1;
            cout << "dua digit NIM pengajar: ";
            cin >> nilai2;

            if ((nilai1 > 60) & (nilai2 > 60))
                cout << "Lulus\n";
            else
                cout << "Tidak Lulus\n";

        }
        else if (pilihan == 2) {
            double celsius;

            cout << "suhu Celsius (dua digit NIM): ";
            cin >> celsius;

            cout << "Fahrenheit: " << celsius * 9 / 5 + 32 << '\n';
            cout << "Reamur: " << celsius * 4 / 5 << '\n';
            cout << "Kelvin: " << celsius + 273.15 << '\n';

        }
        else if (pilihan == 3) {
            double r, t;

            cout << "dua digit NIM mahasiswa (jari-jari): ";
            cin >> r;
            cout << "digit NIM pengajar (tinggi): ";
            cin >> t;

            cout << "Volume tabung: " << 3.14 * r * r * t << '\n';

        }
        else if (pilihan != 0) {
            cout << "why you choose a non existence option?\n";
        }

    } while (pilihan != 0);

    cout << "Mmhmhmhmmmm...\n";
    cout << "Press ..... To exit.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}