#include <iostream>
using namespace std;


void sapa(string nama = "Mahasiswa", string kampus = "PENS", string jurusan = "Game Technology") {
    cout << "Halo," << nama << " dari " << kampus << "!" << " Dengan Jurusan " << jurusan << endl;
}

int main() {
   sapa();
   sapa("John");
   sapa("Jane", "Unair");
   sapa("Budi", "UPNYK", "Informatika");
    
}