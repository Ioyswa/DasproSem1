#include <iostream>
#include <string>

using namespace std;

int main()
{
    int total_belanja, potongan, bayar_akhir;
    string tipe_member;
    float diskon_dasar, bonus_member, diskon_total;

    cout << "Masukkan Total Belanja: ";
    cin >> total_belanja;
    cout << "Masukkan Tipe Member(REG/GOLD/PLAT): ";
    cin >> tipe_member;

    if (total_belanja < 100000)
    {
        diskon_dasar = 0.0;
        cout << "Diskon Dasar = 0%\n";
    }
    else if (total_belanja >= 100000)
    {
        diskon_dasar = 0.05;
        cout << "Diskon Dasar = 5%\n";
    }
    else if (total_belanja >= 250000)
    {
        diskon_dasar = 0.07;
        cout << "Diskon Dasar = 7%\n";
    }
    else if (total_belanja >= 500000)
    {
        diskon_dasar = 0.10;
        cout << "Diskon Dasar = 10%\n";
    }

    if (total_belanja >= 50000)
    {
        if (tipe_member == "REG")
        {
            bonus_member = 0.0;
            cout << "Bonus Member REG = 0%\n";
        }
        else if (tipe_member == "GOLD")
        {
            bonus_member = 0.02;
            cout << "Bonus Member GOLD = 2%\n";
        }
        else if (tipe_member == "PLAT")
        {
            bonus_member = 0.05;
            cout << "Bonus Member PLAT = 5%\n";
        }
        else
        {
            bonus_member = 0.00;
        }
    }
    else
    {
        total_belanja = 50000;
        cout << "Bonus Member = 0%\n";
    }
    
    diskon_total = diskon_dasar + bonus_member;
    potongan = total_belanja * diskon_total;
    bayar_akhir = total_belanja - potongan;
    cout << "Total Belanja = " << total_belanja << endl;
    cout << "Potongan = " << potongan << endl;
    cout << "Bayar AKhir = " << bayar_akhir << endl;
}