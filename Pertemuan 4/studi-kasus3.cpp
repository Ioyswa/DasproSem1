#include <iostream>
using namespace std;

int main() {
    string player_name;
    int score = 0, reward = 0, penalty = 0;

    cout << "Masukkan nama : ";
    getline(cin, player_name);

    cout << "Masukkan Skor awal : ";
    cin >> score;

    cout << "Masukkan nilai Hadiah : ";
    cin >> reward;

    cout << "Masukkan nilai Hukuman : ";
    cin >> penalty;

    cout << "############" << endl;
    cout << "Nama Pemain : " << player_name << endl;
    cout << player_name << " Mendapat Hadiah Skor = " << reward << endl;
    cout << "Total Skor dari " << player_name << "Menjadi = " << (score += reward) << endl;
    
    cout << "\n" << player_name << " Mendapat Hukuman Skor = " << penalty << endl;
    cout << "Total Skor dari " << player_name << " Menjadi = " << (score -= penalty) << endl;
}