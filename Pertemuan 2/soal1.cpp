#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
    float luas = 0, keliling = 0, jari_jari = 0, &r = jari_jari;
    cout << "Selamat Datang Dzakiy Ibnu K, Pada Aplikasi Mencari Luas dan Keliling Lingkaran!" << endl;
    cout << "Masukkan jari-jari Lingkaran : ";
    cin >> r;
    cout << "Dengan jari-jari: " << r << " Maka;" << endl;
    cout << setprecision(40) << M_PI << endl;
    luas = M_PI * r * r;
    keliling = 2 * M_PI * r;
    cout << "Luas = " << luas << endl << "Keliling = " << keliling;   
    printf("test");

}

