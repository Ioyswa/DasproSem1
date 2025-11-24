#include <iostream>
using namespace std;

int hitung_luas(int sisi) {
    return sisi * sisi;
}

int hitung_keliling(int sisi) {
    return 4 * sisi;
}

void hasil(int sisi) {
    int keliling = hitung_keliling(sisi);
    int luas = hitung_luas(sisi);

    cout << "Sisi Persegi: " << sisi << endl;
    cout << "Luas Persegi: " << luas << endl;
    cout << "Keliling Persegi: " << keliling << endl;
}

int main() {
    int sisi, keliling, luas;

    cout << "Masukkan Sisi Persegi: ";
    cin >> sisi;
    hasil(sisi);
}
