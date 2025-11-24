#include <iostream>
using namespace std;

void tampilkan_status(string name, int hp, int score) {
    cout << "Nama : " << name << endl;
    cout << "HP : " << hp << endl;
    cout << "Skor : " << score << endl;
}

int main() {
    tampilkan_status("Hero", 100, 250);
}