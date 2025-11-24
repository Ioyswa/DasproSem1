#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama, karakter;
    int umur;

    cout << "### Buat Profil Pemain ###" << endl;
    cout << "Masukkan nama Anda : ";
    getline(cin, nama);
    cout << "Masukkan umur anda(contoh 18, 22) : ";
    cin >> umur;
    cout << "Pilih Karakter(Warrior, Archer, Mage) : ";
    cin >> karakter;
    cout << "\n### Profil Pemain ###" << endl;;
    cout << left << setw(10) << "Nama" << ":" << nama << endl;
    cout << left << setw(10) << "Umur" << ":" << umur << " Tahun" << endl;
    cout << left << setw(10) << "Karakter" << ":" << karakter << endl;
    cout << "Selamat Datang, " << nama << "! Semoga sehat selalu :) ";
}