#include <iostream>
using namespace std;

int main() {
    int number;
    do {
        cout << "Masukkan angka (0 untuk berhenti): ";
        cin >> number;
    } while (number != 0);
    cout << "Loop Selesai.";
    
}