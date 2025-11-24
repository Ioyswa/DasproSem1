#include <iostream>
#include <string>
using namespace std;
int main()
{
    string playerName, job;
    int level;
    cout << "Masukkan nama karakter: ";
    getline(cin, playerName);
    cout << "Masukkan job (misal: Mage, Knight, Archer): ";
    cin >> job;
    cout << "Masukkan level awal: ";
    cin >> level;
    cout << "\nProfil Karakter:\n";
    cout << "Nama: " << playerName << endl;
    cout << "Job: " << job << endl;
    cout << "Level: " << level << endl;
    cout << "=============================\n";
    return 0;
}