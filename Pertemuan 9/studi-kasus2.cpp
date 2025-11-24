#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tinggi = 0;
    cout << "Masukkan tinggi(Angka Positif dan lebih dari 0): ";
    cin >> tinggi;
    if (tinggi <= 0)
    {
        cout << "Masukkan Angka Positif!";
        return 0;
    }

    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "#############" << endl;

    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = i; j <= tinggi; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "#############" << endl;

    for (int i = 1; i <= tinggi; i++)
    {
        
        for (int j = 1; j <= tinggi - i; j++)
        {
            cout << " ";
        }
        
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}