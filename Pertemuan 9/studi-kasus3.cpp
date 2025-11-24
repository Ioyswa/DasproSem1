#include <iostream>
using namespace std;

int main() {
    const int MAX_WAVE = 100;
    const int MAX_ENEMY = 15;

    for (int wave = 1; wave <= MAX_WAVE; wave++) {
        int total_enemy = 3 * wave;
        cout << "\n=== Wave " << wave << " Dimulai! ===" << endl;
        cout << "Musuh muncul: " << total_enemy << endl;
        if (total_enemy >= MAX_ENEMY) {
            cout << "Terlalu banyak musuh! Pemain Mundur";
            break;
        }



        for (int enemy = 1; enemy <= total_enemy; enemy++) {
            cout << "Musuh ke-" << enemy << " Telah Dikalahkan!" << endl;
        }

        cout << "Wave " << wave << " selesai!" << endl;
    }

    cout << "\nSimulasi Berakhir" << endl;
}
