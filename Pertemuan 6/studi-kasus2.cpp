#include <iostream>
#include <string>
using namespace std;

int main() {
    int player_score;
    string player_level;
    cout << "Masukkan Skor Pemain : ";
    cin >> player_score;

    if (player_score >= 1000) {
        player_level = "Pro Player";
    } else if (player_score >= 500) {
        player_level = "Intermediate";
    } else {
    player_level = "Beginner";
    }
    cout << "Level: " << player_level << endl;
}