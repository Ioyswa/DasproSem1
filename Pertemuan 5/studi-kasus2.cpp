#include <iostream>
using namespace std;

int main() {
    string inventory[2][3] = {
        {"Potion", "Sword", "Shield"}, 
        {"Bow", "Arrow", "Helmet"}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << inventory[i][j] << " | ";
        }
        cout << endl;
        
    }
}