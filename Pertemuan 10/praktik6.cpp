#include <iostream>
using namespace std;

int tambah_skor(int skor, int bonus) {
    return skor + bonus;
}

void tampilkan_skor(int skor) {
    cout << "Skor Sekarang: " << skor << endl;
}

int main() {
    int skor = 100;
    skor = tambah_skor(skor, 50);
    tampilkan_skor(skor);
}
