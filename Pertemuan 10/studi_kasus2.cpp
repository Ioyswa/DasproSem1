#include <iostream>
using namespace std;



int hitung_bonus(int level) {
    if (level >= 10){
        return 500;
    } else if(level >= 5) {
        return 200;
    } else {
       return 50;
    }
    
}

int hitung_total_skor(int base_score, int bonus_score) {
    return base_score + bonus_score;
}

void tampilkan_skor_akhir(string player_name, int total_score) {
    cout << "=== Skor Akhir Pemain ===" << endl;
    cout << "Nama: " << player_name << endl;
    cout << "Total Skor: " << total_score << endl;
}

int main() {
    string player_name;
    int base_score, bonus_score, total_score, level;
    cout << "Masukkan nama Pemain : ";
    cin >> player_name;
    cout << "Masukkan Skor Awal: ";
    cin >> base_score;
    cout << "Masukkan Level: ";
    cin >> level;
    bonus_score = hitung_bonus(level);
    total_score = hitung_total_skor(base_score, bonus_score);
    tampilkan_skor_akhir(player_name, total_score);
    
}