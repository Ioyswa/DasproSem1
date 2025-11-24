#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan suatu bilangan : ";
    cin >> angka;

    if (angka >= 0){
        cout << "Bilangan " << angka << " adalah bilangan POSITIF" << endl;
    } else {
        cout << "Bilangan " << angka << " adalah bilangan NEGATIF" << endl;
    }
    
    
}