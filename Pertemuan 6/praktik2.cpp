#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan suatu bilangan : ";
    cin >> angka;

    if (angka % 2 == 0)
    {
        cout << "Bilangan " << angka << " adalah bilangan GENAP" << endl;
    } else {
        cout << "Bilangan " << angka << " adalah bilangan GANJIl" << endl;
    }
}