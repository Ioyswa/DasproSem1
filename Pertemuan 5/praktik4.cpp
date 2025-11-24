#include <iostream>
using namespace std;

int main() {
    char papan[3][3] = {
        {'X', 'O', 'X'},
        {'O', 'X', ' '},
        {' ', 'O', 'X'}
    };
    cout << "Papan Tic-Tac-Toe:\n";
    cout << papan[0][0] << " | " << papan[0][1] << " | " << papan[0][2] << endl;
    cout << "==+===+==\n";
    cout << papan[1][0] << " | " << papan[1][1] << " | " << papan[1][2] << endl;
    cout << "==+===+==\n";
    cout << papan[2][0] << " | " << papan[2][1] << " | " << papan[2][2] << endl;
    cout << "==+===+==\n";
    return 0;
}