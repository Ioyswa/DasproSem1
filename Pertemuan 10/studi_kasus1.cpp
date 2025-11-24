#include <iostream>
using namespace std;

int hitung_damage(int attacker_attack, int defender_defense) {
    int damage = attacker_attack - defender_defense;
    if (damage < 0) damage = 0;
    return damage;
}

void tampilkan_hasil(string attacker_name, string defender_name, int damage) {
    cout << attacker_name << " menyerang " << defender_name << " dan menghasilkan damage " << damage << endl;

}

int main() {
    string player_name = "Knight", monster_name = "Slime";
    int player_attack = 25, player_defense = 5;
    int monster_attack = 5, monster_defense = 10;

    tampilkan_hasil(player_name, monster_name, hitung_damage(player_attack, monster_defense));

}