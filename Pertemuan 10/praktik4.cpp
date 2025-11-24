#include <iostream>
using namespace std;

int hitung_damage(int atk, int def) {
    int damage = atk - def;
    if (damage < 0) damage = 0;
    return damage;
}

int main() {
    int atk = 40, def = 25;
    int dmg = hitung_damage(atk, def);
    cout << "Damage yang diterima musuh: " << dmg << endl;
}