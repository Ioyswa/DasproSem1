#include <iostream>

using namespace std;

void ubah_nilai(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += 10;
    }
}

int main()
{
    int data[5] = {1, 2, 3, 4, 5};

    cout << "Sebelum dipanggil fungsi ubah_nilai(): " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;

    ubah_nilai(data, 5);
    cout << "Setelah dipanggil fungsi ubah_nilai(): " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}