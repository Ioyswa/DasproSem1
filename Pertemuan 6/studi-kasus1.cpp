#include <iostream>
#include <string>
using namespace std;

int main() {
    int player_health = 0;
    string status;
    cout << "Masukkan Health Player : ";
    cin >> player_health;

    if (player_health > 0) {
        status = "Player Hidup";
    } else {
        status = "Player Mati";
    }
    cout << "Hp: " << player_health << endl;
    cout << "Status: " << status << endl;


}