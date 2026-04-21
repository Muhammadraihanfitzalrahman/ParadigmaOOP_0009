#include <iostream>
#include <string>

using namespace std;

// 1. Definisi Class (Blueprint Barang)
class Barang {
public:
    // 2. Atribut (Spesifikasi Barang)
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    // 3. Method untuk menampilkan spesifikasi
    void tampilkanBarang() {
        cout << "--- Spesifikasi Barang ---" << endl;
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // 4. Instansiasi Objek Pertama
    Barang elektronik;
    elektronik.nama = "Laptop Gaming";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "20-04-2026";

    // 5. Instansiasi Objek Kedua
    Barang nonElektronik;
    nonElektronik.nama = "Meja Belajar";
    nonElektronik.jumlah = 50;
    nonElektronik.kategori = "Furniture";
    nonElektronik.tanggalProduksi = "15-01-2026";

    // 6. Menampilkan Hasil
    elektronik.tampilkanBarang();
    nonElektronik.tampilkanBarang();

    return 0;
}