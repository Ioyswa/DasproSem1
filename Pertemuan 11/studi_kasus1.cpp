#include <iostream>
#include <string>
using namespace std;

void tampil_data_string(string arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void tampil_data_int(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void tampil_data_float(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int ukuran_array_string(string arr[], int ukuran_elemen) {
    return ukuran_elemen;
}

int ukuran_array_int(int arr[], int ukuran_elemen) {
    return ukuran_elemen;
}


int ukuran_array_float(float arr[], int ukuran_elemen) {
    return ukuran_elemen;
}

int main() {
    string nama[10] = {"Nama1", "Nama2", "Nama3", "Nama4", "Nama5", "Nama6", "Nama7", "Nama8", "Nama9", "Nama10"};
    string jurusan[10] = {"Jurusan1", "Jurusan2", "Jurusan3", "Jurusan4", "Jurusan5", "Jurusan6", "Jurusan7", "Jurusan8", "Jurusan9", "Jurusan10"};
    int kelas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int semester[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float ipk[10] = {0.1, 0.2, 0.3, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.1};

    cout << "Data Nama: ";
    tampil_data_string(nama, ukuran_array_string(nama, 10));

    cout << "Data Jurusan: ";
    tampil_data_string(jurusan, ukuran_array_string(jurusan, 10));

    cout << "Data Kelas: ";
    tampil_data_int(kelas, ukuran_array_int(kelas, 10));

    cout << "Data Semester: ";
    tampil_data_int(semester, ukuran_array_int(semester, 10));

    cout << "Data IPK: ";
    tampil_data_float(ipk, ukuran_array_float(ipk, 10));

    return 0;
}
