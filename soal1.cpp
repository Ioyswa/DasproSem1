// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;


int main() {
    //NRP 061
    float luas, keliling, r;
    cout << "Selamat Datang Dzakiy Ibnu K, Pada Aplikasi Mencari Luas dan Keliling Lingkaran!" << endl;
    cout << "Masukkan jari-jari Lingkaran : ";
    cin >> r;
    cout << "Dengan jari-jari: " << r << " Maka;" << endl;
    luas = M_PI * r * r;
    keliling = 2 * M_PI * r;
    cout << "Luas = " << luas << endl << "Keliling = " << keliling;

    return 0;
}
