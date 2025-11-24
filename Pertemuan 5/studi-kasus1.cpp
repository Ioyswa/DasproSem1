#include <iostream>
using namespace std;

int main() {
    int skor_pemain[5];
    int total = 0;
    cout << "Masukkan skor untuk 5 pemain: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan Skor untuk player ke-" << (i+1) << ": ";
        cin >> skor_pemain[i];
        total += skor_pemain[i];
    }
    for (int i = 0; i < 5; i++)
    {
         cout << "Skor Pemain ke-" << (i+1) << ": " << skor_pemain[i] << endl;
    }
    
    cout << "Rata-rata Skor : " << (total / 5.0 );
    
    
}