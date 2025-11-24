#include <iostream>
using namespace std;


void salam(string nama, int umur, string kota_asal) {
    cout << "Halo " << nama << "\nUmurmu adalah: " << umur << " Dan Kamu Berasal Dari " << kota_asal;
}

int main() {
    string nama, kota_asal;
    int umur;

    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan Umur: ";
    cin >> umur;
    cout << "Masukkan Kota Asal: ";
    cin >> kota_asal;
    salam(nama, umur, kota_asal);
    
}