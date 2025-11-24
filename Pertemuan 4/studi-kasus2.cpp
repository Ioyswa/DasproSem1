#include <iostream>
using namespace std;

int main() {
    int skor = 0, sisa_skor = 0, level = 1;

    skor += 80;
    sisa_skor = skor % 7;
    cout << "Skor = " << skor << endl;
    level++;
    cout << "Level = " << level << endl;
    level++;
    cout << "skor % 7" << sisa_skor << endl;
    cout << "Level Akhir = " << level << endl;
}