#include <iostream>

using namespace std;

int main()
{
    int menu;
    int player_hp = 0, enemy_hp = 0, potion = 0;

    cout << "===MENU===\n1. Start\n2. Continue\n3. Exit\n Pilih: ";
    cin >> menu;

    switch (menu)
    {
    case 1:
        int diff;
        cout << "Masukkan Difficulty (1=Easy, 2=Normal, 3=Hard): ";
        cin >> diff;
        if (diff == 1)
        {
            player_hp = 150;
            enemy_hp = 80;
            potion = 5;
            cout << "Mode Easy.\n";
        }
        else if (diff == 2)
        {
            player_hp = 120;
            enemy_hp = 120;
            potion = 3;
            cout << "Mode Normal.\n";
        }
        else if (diff == 3)
        {
            player_hp = 100;
            enemy_hp = 150;
            potion = 1;
            cout << "Mode Hard.\n";
        }
        else
        {
            player_hp = 120;
            enemy_hp = 120;
            potion = 3;
            cout << "Difficulty tidak dikenali. Default Normal";
        }
        cout
            << "Player HP: " << player_hp
            << "\nEnemy HP: " << enemy_hp
            << "\nPotion: " << potion;
        break;

    case 2:
        cout << "Melanjutkan Save terakhir...\n";
        break;
    case 3:
        cout << "Keluar. Sampai Jumpa Lagi\n";
        break;
    default:
        cout << "Pilihan tidak Valid!\n";
        break;
    }
}