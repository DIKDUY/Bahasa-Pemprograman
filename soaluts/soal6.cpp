#include <iostream>
using namespace std;

void menu() {
    cout << "Pilih operasi:" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
}

void tambah() {
    int a, b;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Hasil penjumlahan: " << a + b << endl;
}

void kurang() {
    int a, b;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Hasil pengurangan: " << a - b << endl;
}

void kali() {
    int a, b;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Hasil perkalian: " << a * b << endl;
}

void bagi() {
    int a, b;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    if (b != 0) {
        cout << "Hasil pembagian: " << static_cast<double>(a) / b << endl;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
    }
}

int main() {
    menu();
    int pilihan;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            tambah();
            break;
        case 2:
            kurang();
            break;
        case 3:
            kali();
            break;
        case 4:
            bagi();
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
} 