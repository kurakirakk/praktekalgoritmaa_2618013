#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, kelas;
    int nim, semester, ipk;

    cout << "================================" << endl;
    cout << "       Praktek Algoritma       " << endl;
    cout << "================================" << endl;

    cout << "Masukkan Nama     : ";
    getline(cin, nama);

    cout << "Masukkan NIM      : ";
    cin >> nim;

    cout << "Masukkan Kelas    : ";
    cin >> kelas;

    cout << "Masukkan Semester : ";
    cin >> semester;

    cout << "Masukkan IPK      : ";
    cin >> ipk;

    cout << endl;
    cout << "================================" << endl;
    cout << "       BIODATA MAHASISWA        " << endl;
    cout << "================================" << endl;

    cout << "Nama     : " << nama << endl;
    cout << "NIM      : " << nim << endl;
    cout << "Kelas    : " << kelas << endl;
    cout << "Semester : " << semester << endl;
    cout << "IPK      : " << ipk << endl;

    cout << "================================" << endl;

    cout << "\nTekan Enter untuk keluar...";
    cin.ignore();
    cin.get();

    return 0;
}