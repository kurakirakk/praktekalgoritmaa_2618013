#include <cmath>
#include <iostream>
#include <string>

std::string formatRupiah(long long amount) {
    std::string digits = std::to_string(amount);
    for (int position = static_cast<int>(digits.size()) - 3; position > 0; position -= 3) {
        digits.insert(static_cast<std::size_t>(position), ".");
    }
    return "Rp" + digits;
}

int main() {
    std::string nama;
    std::string nim;
    long long pendapatan;
    int tanggungan;

    std::cout << "===  Pajak Penghasilan ===\n";
    std::cout << "Nama: ";
    std::getline(std::cin, nama);
    std::cout << "NIM: ";
    std::getline(std::cin, nim);

    std::cout << "Pendapatan bulanan (Rp): ";
    if (!(std::cin >> pendapatan)) {
        std::cout << "Input pendapatan tidak valid. Masukkan angka bulat.\n";
        return 1;
    }
    if (pendapatan < 0) {
        std::cout << "Input tidak valid: pendapatan tidak boleh negatif.\n";
        return 1;
    }

    std::cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
    if (!(std::cin >> tanggungan) || (tanggungan != 0 && tanggungan != 1)) {
        std::cout << "Input tidak valid: masukkan 1 untuk Ya atau 0 untuk Tidak.\n";
        return 1;
    }

    const char* kategori;
    int tarif;
    if (pendapatan < 5000000) {
        kategori = "Di bawah Rp5.000.000";
        tarif = 0;
    }
    else if (pendapatan < 10000000) {
        kategori = "Rp5.000.000 sampai kurang dari Rp10.000.000";
        tarif = 5;
    }
    else if (pendapatan < 20000000) {
        kategori = "Rp10.000.000 sampai kurang dari Rp20.000.000";
        tarif = 10;
    }
    else {
        kategori = "Rp20.000.000 atau lebih";
        tarif = 15;
    }

    long double pajak = static_cast<long double>(pendapatan) * tarif / 100.0L;
    if (tanggungan == 1) {
        pajak -= 100000.0L;
    }
    if (pajak < 0.0L) {
        pajak = 0.0L;
    }
    const long long pajakAkhir = std::llround(pajak);

    std::cout << "\n=== Hasil Perhitungan ===\n";
    std::cout << "Nama       : " << nama << '\n';
    std::cout << "NIM        : " << nim << '\n';
    std::cout << "Kategori   : " << kategori << '\n';
    std::cout << "Tarif pajak: " << tarif << "%\n";
    std::cout << "Pajak akhir: " << formatRupiah(pajakAkhir) << '\n';
    return 0;
}

//tax is suck u know