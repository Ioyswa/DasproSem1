#include <iostream>
#include <iomanip>
using namespace std;

float hitungAkhir(float tugas, float uts, float uas) {
    return (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);
}

char tentukanPredikat(float nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 55) return 'C';
    else if (nilai >= 40) return 'D';
    else return 'F';
}

int main() {
    int jumlah;
    cout << "Jumlah mahasiswa (1-10): ";
    cin >> jumlah;
    
    if (jumlah > 10) jumlah = 10;
    else if (jumlah < 1) jumlah = 1;
    
    float tugas[jumlah], uts[jumlah], uas[jumlah], nilaiAkhir[jumlah];
    string nama[jumlah];
    
    for (int i = 0; i < jumlah; i++) {
        cout << "\nNama mhs ke-" << i + 1 << ": ";
        cin >> nama[i];
        cout << "Nilai Tugas UTS UAS (0-100): ";
        cin >> tugas[i] >> uts[i] >> uas[i];
        nilaiAkhir[i] = hitungAkhir(tugas[i], uts[i], uas[i]);
    }
    cout << "\nNama         Tugas        UTS      UAS    Akhir    Pred" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < jumlah; i++) {
        cout << nama[i] << "         "
             << tugas[i] << "      "
             << uts[i] << "    "
             << uas[i] << "    "
             << nilaiAkhir[i] << "    "
             << tentukanPredikat(nilaiAkhir[i]) << endl;
    }
    return 0;
}