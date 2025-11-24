#include <iostream>
#include <string>
using namespace std;

int main()
{
    string game_title = "Legend of Code";
    string developer = "PENS GameLab";
    string version = "v1.2.0";
    string genre = "Ngampus";
    string intro = "Selamat datang di " + game_title + " (" + version + ")";
    string full_intro = intro + "\nGenre: " + genre;
    cout << "=====================================\n";
    cout << full_intro << endl;
    cout << "Dikembangkan oleh: " << developer << endl;

    cout << "=====================================\n";
    return 0;
}