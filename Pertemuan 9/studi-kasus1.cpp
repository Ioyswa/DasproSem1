#include <iostream>
using namespace std;

int main() {
    int player_health = 3, player_score = 0;
    char monster_input;
    bool is_monster_attack = false;
    do {
        cout << "Nyawa Tersisa : " << player_health << " | " << "Skor : " << player_score << endl;
        cout << "Apakah Terkena Musuh?(Y/N): ";
        cin >> monster_input;
        switch (monster_input)
        {
        case 'Y':
            player_health -= 1;
            player_score += 10;
            break;
            
        case 'N':
            player_score += 10;
            break;

        default:
            cout << "Masukkin yang bener mas" << endl;
            break;
        }
        
    } while (player_health > 0);
    cout << "Game Over! Total Skor : " << player_score;
}