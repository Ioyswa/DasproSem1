#include <iostream>
#include <string>
#include <cctype>
using namespace std;



int hitung_jumlah_vokal(string kalimat) {
    int jumlah_vokal = 0;

    for (char text : kalimat) {
        char lower = tolower(text);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            jumlah_vokal++;
        }

    }
    return jumlah_vokal;
    
    
}

string ambil_kata_terakhir(string kalimat) {
    size_t posisi_spasi = kalimat.find_last_of(' ');

    if (posisi_spasi == string::npos) {
        return kalimat; // tidak ada spasi, berarti hanya satu kata
    } else {
        return kalimat.substr(posisi_spasi + 1);
    }
}

int main()
{
    string quest;
    cout << "Masukkan Quest?";
    getline(cin, quest);
    cout << "Quest: " << quest << endl;
    cout << "Jumlah karakter: " << quest.length() << endl;
    cout << "Kata pertama: " << quest.substr(0, 4) << endl;
    cout << "Jumlah Huruf Vokal dari quest di atas adalah : " << hitung_jumlah_vokal(quest) << endl;
    cout << "Kata terkahir dari kalimat di atas adalah: " << ambil_kata_terakhir(quest) << endl;
    quest.append(" - Urgent!");
    cout << "Update quest: " << quest << endl;
    return 0;
}



