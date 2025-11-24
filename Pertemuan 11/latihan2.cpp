#include <iostream>
using namespace std;


float luas_segitiga(float alas, float tinggi) {
    return (alas * tinggi) / 2;
}

float keliling_segitiga(float sisi1, float sisi2, float sisi3) {
    return sisi1 + sisi2 + sisi3;
}

int main() {
    float a, t, sisi1, sisi2, sisi3;
    cout << "Masukkan alas segitiga: ";
    cin >> a;
    cout << "Masukkan tinggi segitiga: ";
    cin >> t;

    cout << "Masukkan Sisi 1: ";
    cin >> sisi1;
    cout << "Masukkan Sisi 2: ";
    cin >> sisi2;
    cout << "Masukkan Sisi 3: ";
    cin >> sisi3;

    cout << "Luas Segitiga = " << luas_segitiga(a, t) << endl;
    cout << "Keliling Segitiga = " << keliling_segitiga(sisi1, sisi2, sisi3) << endl;
    
}