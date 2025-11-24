#include <iostream>
#include <string>
using namespace std;
void ubahNama(string &nama, string &gelar)
{
    nama = gelar + " " + nama.append(" of Light");
    
    cout << "Nama di dalam fungsi: " << nama <<  endl;
}



int main()
{
    string player = "Arion";
    string title = "Sir";
    int level = 15;
    cout << "Nama sebelum fungsi: " << player << endl;
    ubahNama(player, title);
    cout << "Nama setelah fungsi: " << player << " Level: " << level << endl;
    
    return 0;
}