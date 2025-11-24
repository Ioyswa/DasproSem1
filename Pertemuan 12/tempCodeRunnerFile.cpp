#include <iostream>
using namespace std;

float hitung_rata(float skor[], int jumlah_ronde)
{
    float rata = 0.0, total = 0.0;
    for (int i = 0; i < jumlah_ronde; i++)
    {
        total += skor[i];
    }
    return rata = total / jumlah_ronde;
}

int hitung_hebat(float skor[], int jumlah_ronde)
{
    int hebat = 0;
    for (int i = 0; i < jumlah_ronde; i++)
    {
        if (skor[i] >= 80)
            hebat += 1;
    }
    return hebat;
}

float cari_tertinggi(float skor[], int jumlah_ronde)
{
    float tertinggi = skor[0];
    for (int i = 1; i < jumlah_ronde; i++)
    {
        if (skor[i] > tertinggi)
            tertinggi = skor[i];
    }
    return tertinggi;
}

float cari_terendah(float skor[], int jumlah_ronde)
{
    float terendah = skor[0];
    for (int i = 1; i < jumlah_ronde; i++)
    {
        if (skor[i] < terendah)
            terendah = skor[i];
    }
    return terendah;
}

string cari_performa(float rata)
{
    string performa;
    if (rata >= 80)
    {
        performa = "Luar Biasa";
    }
    else if (rata >= 60)
    {
        performa = "Baik";
    }
    else
    {
        performa = "Perlu Latihan lagi";
    }
    return performa;
}

int main()
{
    int jumlah_ronde;
    cout << "Masukkan jumlah ronde (1-20): ";
    cin >> jumlah_ronde;

    if (jumlah_ronde > 20 || jumlah_ronde < 1)
    {
        cout << "Masukkan jumlah ronde antara 1-20!";
        exit(EXIT_FAILURE);
    }

    float skor[jumlah_ronde];
    for (int i = 0; i < jumlah_ronde; i++)
    {
        cout << "Masukkan Skor untuk ronde ke-" << i + 1 << ": ";
        cin >> skor[i];
    }
    cout << endl;

    cout << "Rata-rata: " << hitung_rata(skor, jumlah_ronde) << endl;
    cout << "Hebat: " << hitung_hebat(skor, jumlah_ronde) << endl;
    cout << "Skor Tertinggi: " << cari_tertinggi(skor, jumlah_ronde) << endl;
    cout << "Skor Terendah: " << cari_terendah(skor, jumlah_ronde) << endl;
    cout << "Performa: " << cari_performa(hitung_rata(skor, jumlah_ronde));
}