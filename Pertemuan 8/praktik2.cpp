#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user, password, role;
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> password;

    if (user == "admin" && password == "1234")
    {
        cout << "Role (ADMIN/PLAYER): ";
        cin >> role;
        if (role == "ADMIN")
            cout << "Selamat Datang Admin\n";
        else if (role == "PLAYER")
            cout << "Selamat Datang PLAYER\n";
        else
            cout << "Role tak dikenali\n";
    }
    else
    {
        cout << "Login Gagal!\n";
    }
}