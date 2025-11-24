#include <iostream>
using namespace std;

int main() {
    double total_belanja, bayar, potongan = 0;

    cout << "Masukkan total belanja kamu! : ";
    cin >> total_belanja;

    if (total_belanja >= 100000) {
        potongan = total_belanja * 0.05;
    }
    bayar = total_belanja - potongan;

    cout << "Total Belanja Kamu adalah : " << total_belanja << endl;
    cout << "Kamu mendapat potongan belanja sebesar : " << potongan << endl;
    cout << "Total yang harus kamu bayarkan adalah : " << bayar << endl;
}