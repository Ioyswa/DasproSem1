#include <iostream>
#include <string>
using namespace std;
int main()
{
    string playerName, npcName, dialog;
    cout << "Masukkan nama pemain: ";
    getline(cin, playerName);
    cout << "Masukkan nama NPC: ";
    getline(cin, npcName);
    cout << "Masukkan dialog NPC: ";
    getline(cin, dialog);
    cout << "\n=== SCENE 1 ===\n";
    npcName[0] = toupper(npcName[0]);
    playerName[0] = toupper(playerName[0]);
    cout << npcName << ": " << dialog << endl;
    cout << playerName << ": (menjawab dengan senyum)\n";
    cout << "Melihat jawaban yang ramah, " + npcName + " Merasa Senang";
    return 0;
}