#include <iostream>
#include <cmath>  
#include <string>
using namespace std;

int main() {
    string key;
    double a, b, hasil;
    int pilihan;

    do {
        cout << "\n===== Kalkulator Sederhana =====" << endl;
        cout << "1. Penjumlahan (+)" << endl;
        cout << "2. Pengurangan (-)" << endl;
        cout << "3. Perkalian (*)" << endl;
        cout << "4. Pembagian (/)" << endl;
        cout << "5. Pangkat (pow)" << endl;
        cout << "6. Akar Kuadrat (sqrt)" << endl;
        cout << "Pilih operasi (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan angka pertama: ";
                cin >> a;
                cout << "Masukkan angka kedua: ";
                cin >> b;
                hasil = a + b;
                cout << "Hasil: " << hasil << endl;
                break;

            case 2:
                cout << "Masukkan angka pertama: ";
                cin >> a;
                cout << "Masukkan angka kedua: ";
                cin >> b;
                hasil = a - b;
                cout << "Hasil: " << hasil << endl;
                break;

            case 3:
                cout << "Masukkan angka pertama: ";
                cin >> a;
                cout << "Masukkan angka kedua: ";
                cin >> b;
                hasil = a * b;
                cout << "Hasil: " << hasil << endl;
                break;

            case 4:
                cout << "Masukkan angka pertama: ";
                cin >> a;
                cout << "Masukkan angka kedua: ";
                cin >> b;
                if (b != 0)
                    hasil = a / b;
                else {
                    cout << "Error: Maaf pembagian dengan nol tidak diizinkan!" << endl;
                    break;
                }
                cout << "Hasil: " << hasil << endl;
                break;

            case 5:
                cout << "Masukkan angka (basis): ";
                cin >> a;
                cout << "Masukkan pangkat: ";
                cin >> b;
                hasil = pow(a, b);
                cout << "Hasil: " << hasil << endl;
                break;

            case 6:
                cout << "Masukkan angka: ";
                cin >> a;
                if (a >= 0)
                    hasil = sqrt(a);
                else {
                    cout << "Error: Tidak bisa akar dari bilangan negatif!" << endl;
                    break;
                }
                cout << "Hasil: " << hasil << endl;
                break;

            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }

        cout << "\nApakah ingin berhenti? (Y/N): ";
        cin >> key;

    } while (key != "Y" && key != "y");

    cout << "Program selesai. Terima kasih!\n";
}
