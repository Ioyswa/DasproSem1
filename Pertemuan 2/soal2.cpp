#include <iostream>

using namespace std;


int main() {
    float celcius = 0.0, fahrenheit = 0.0;
    cout << "Selamat Datang Dzakiy Ibnu K, Pada Aplikasi Konversi Suhu dari Celcius ke Fahrenheit!" << endl;
    cout << "Masukkan Suhu Celcius : ";
    cin >> celcius;
    fahrenheit = celcius * 1.8 + 32;
    cout << "Fahrenheit = " << fahrenheit << endl << "Dari Celcius = " << celcius;

    return 0;
}
