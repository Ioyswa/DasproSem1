#include <iostream>
using namespace std;

int main()
{
    int mode, skor = 0, waktu = 0;
    cout << "=== Penilaian Game ==="
         << "\n1. Arcade"
         << "\n2. Survival"
         << "\n3. Time Attack"
         << "\nPilih Mode: ";
    cin >> mode;
    cout << "Masukkan Skor: ";
    cin >> skor;

    switch (mode){
    case 1:
        if (skor >= 1000)
            cout << "Rank S\n";
        else if (skor >= 500)
            cout << "Rank: A\n";
        else if (skor >= 200)
            cout << "Rank: B\n";
        else
            cout << "Rank: C\n";
        break;

    case 2:
        if (skor >= 300)
            cout << "Bertahan Hebat!\n";
        else if (skor >= 100)
            cout << "Cukup Tahan\n";
        else
            cout << "Tumbang terlalu cepat!\n";
        break;

    case 3:
        cout << "Masukkan waktu (detik): ";
        cin >> waktu;
        if (waktu < 60)
            cout << "Cepat Luar Biasa!\n";
        else if (waktu < 120)
            cout << "Cukup Cepat\n";
        else
            cout << "Perlu latihan lagi\n";
        break;

    default:
        cout << "Mode tak dikenali, silahkan pilih mode yang ada!";
        break;
    }
}