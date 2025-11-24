#include <iostream>
using namespace std;

int main() {
    int data[2][2][2]; // array 3D dengan ukuran 2x2x2 a

    // Isi array manual
    data[0][0][0] = 10;
    data[0][0][1] = 20;
    data[0][1][0] = 30;
    data[0][1][1] = 40;
    data[1][0][0] = 50;
    data[1][0][1] = 60;
    data[1][1][0] = 70;
    data[1][1][1] = 80;

    // Loop untuk menampilkan isi array
    for (int i = 0; i < 2; i++) {         // dimensi pertama
        for (int j = 0; j < 2; j++) {     // dimensi kedua
            for (int k = 0; k < 2; k++) { // dimensi ketiga
                cout << data[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
