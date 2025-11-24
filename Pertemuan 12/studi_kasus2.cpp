#include <iostream>
#include <string>
using namespace std;

int hitung_nilai_akhir(int nilai_tugas, int nilai_uts, int nilai_uas)
{
    int nilai_akhir = (0.3 * nilai_tugas) + (0.3 * nilai_uts) + (0.4 * nilai_uas);
    return nilai_akhir;
}

char hitung_predikat(int nilai_akhir)
{
    if (nilai_akhir >= 85)
    {
        return 'A';
    }
    else if (nilai_akhir >= 70)
    {
        return 'B';
    }
    else if (nilai_akhir >= 55)
    {
        return 'C';
    }
    else if (nilai_akhir >= 40)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

int main()
{
    int jumlah_mahasiswa;

    cout << "Masukkan jumlah mahasiswa(1-10): ";
    cin >> jumlah_mahasiswa;

    if (jumlah_mahasiswa > 10 || jumlah_mahasiswa < 1)
    {
        cout << "Masukkan jumlah mahasiswa antara 1-10" << endl;
        exit(EXIT_FAILURE);
    }

    string nama_mahasiswa[jumlah_mahasiswa + 1];
    int nilai_mahasiswa[jumlah_mahasiswa * 3];
    int nilai_akhir_mahasiswa[jumlah_mahasiswa] = {0};
    int nilai_tugas_mahasiswa[jumlah_mahasiswa];
    int nilai_uts_mahasiswa[jumlah_mahasiswa];
    int nilai_uas_mahasiswa[jumlah_mahasiswa];
    char predikat_mahasiswa[jumlah_mahasiswa];

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        cout << "Masukkan Nama Mahasiswa ke-" << i + 1 << ": ";
        cin >> nama_mahasiswa[i];
        cout << "Masukkan Nilai (Tugas, UTS, UAS): ";

        for (int j = 0; j < 3; j++)
        {
            cin >> nilai_mahasiswa[i * 3 + j];
        }
    }

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        cout << endl
             << nama_mahasiswa[i] << endl;

        for (int j = 0; j < 3; j++)
        {
            int index = i * 3 + j;

            cout << "Nilai ke-" << j + 1 << ": " << nilai_mahasiswa[index] << endl;

            if (j == 0)
            {
                nilai_tugas_mahasiswa[i] = nilai_mahasiswa[index];
            }
            else if (j == 1)
            {
                nilai_uts_mahasiswa[i] = nilai_mahasiswa[index];
            }
            else if (j == 2)
            {
                nilai_uas_mahasiswa[i] = nilai_mahasiswa[index];
            }
        }

        nilai_akhir_mahasiswa[i] = hitung_nilai_akhir(
            nilai_tugas_mahasiswa[i],
            nilai_uts_mahasiswa[i],
            nilai_uas_mahasiswa[i]);

        predikat_mahasiswa[i] = hitung_predikat(nilai_akhir_mahasiswa[i]);
    }

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        cout << "\nNama Mahasiswa: " << nama_mahasiswa[i] << endl;
        cout << "Nilai Tugas   : " << nilai_tugas_mahasiswa[i] << endl;
        cout << "Nilai UTS     : " << nilai_uts_mahasiswa[i] << endl;
        cout << "Nilai UAS     : " << nilai_uas_mahasiswa[i] << endl;
        cout << "Nilai Akhir   : " << nilai_akhir_mahasiswa[i] << endl;
        cout << "Predikat      : " << predikat_mahasiswa[i] << endl;
    }
}
