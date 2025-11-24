#include <iostream>

using namespace std;


bool cek_matriks(int matriks[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (matriks[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void isi_matriks(int matriks[2][2], int nilai_awal){
    int nilai = nilai_awal;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matriks[i][j] = nilai++;
        }
    }
}

void tampilkan_matriks(int matriks[2][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << matriks[i][j] << " ";
        }
    cout << endl;
    }
}

void kalikan_matriks(int matriks_a[2][2], int matriks_b[2][2], int hasil[2][2]) {
    if (cek_matriks(matriks_a) || cek_matriks(matriks_b)) {
        cout << "Matriks Kosong";
        return;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                hasil[i][j] += matriks_a[i][k] * matriks_b[k][j];
            }
        }
    }
}

int main() {
    cout << "Hallo" << endl;
    int matriks_a[2][2], matriks_b[2][2], matriks_hasil[2][2];

    isi_matriks(matriks_a, 6);
    isi_matriks(matriks_b, 10);
    cout << "Matriks A:\n";
    tampilkan_matriks(matriks_a);
    cout << "Matriks B:\n";
    tampilkan_matriks(matriks_b);

    kalikan_matriks(matriks_a, matriks_b, matriks_hasil);
    cout << "Hasil perkalian dari 2 matrik A dan matriks B adalah : \n";
    tampilkan_matriks(matriks_hasil);


    
}


