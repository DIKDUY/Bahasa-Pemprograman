#include <iostream>
using namespace std;

int main() {
    int umur;
    cout << "Masukkan umur Anda: ";
    cin >> umur;

    string keterangan;
    if (umur < 21) {
        keterangan = "masih muda";
    } else {
        keterangan = "sudah tua";
    }

    cout << "Berarti Usia Kalian sekarang adalah " << umur << " Tahun, berarti kamu " << keterangan << "." << endl;

    return 0;
} 