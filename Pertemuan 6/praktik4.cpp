#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    if (bilangan2 != 0) {
        double hasil = bilangan1 / bilangan2;
        cout << fixed << setprecision(3);
        cout << "Hasil Pembagian = " << hasil << endl;
    } else {
        cout << "Error, Dibagi dengan 0 !" << endl;
    }
}