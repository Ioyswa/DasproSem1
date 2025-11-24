#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    cout << "Selamat Datang, Silahkan Login!" << endl;
    cout << "Masukkan Username: ";
    cin >> username;
    cout << "Masukkan Password: ";
    cin >> password;

    if (username == "admin" && password == "1234") {
        cout << "Login berhasil, Selamat Datang Admin!" << endl;
    } else {
        cout << "Login gagal, Username atau Password salah!" << endl;
    }
   
}