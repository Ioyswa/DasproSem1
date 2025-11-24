#include <iostream>
using namespace std;

int main() {
    int jumlah_nilai = 0;
    cout << "Masukkan jumlah nilai: ";
    cin >> jumlah_nilai;

    double nilai[jumlah_nilai];  
    double total = 0, rata_rata = 0.0;

    for (int i = 0; i < jumlah_nilai; i++) {
        cout << "Masukkan nilai ke-" << (i+1) << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    rata_rata = total / jumlah_nilai;

    cout << "\nTotal = " << total << endl;
    cout << "Rata-Rata = " << rata_rata << endl;

    return 0;
}
