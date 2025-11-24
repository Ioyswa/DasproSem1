#include <iostream>

using namespace std;

int main() {
    int pilih;
    cout << "1. Mulai\n2. Lanjutkan\n3. Keluar\n Pilih: "; cin >> pilih;

    switch (pilih)
    {
    case 1: cout << "Permainan Dimulai...\n"; break;
    case 2: cout << "Melanjutkan Permainan...\n"; break;
    case 3: cout << "Keluar, Sampai Jumpa...\n"; break;
    default: cout << "Pilihan Tidak Valid\n"; break;
    }

}