#include <iostream>
using namespace std;

int main() {
    int scores[5] = {85, 90, 78, 88, 95};

    cout << "Daftar Skor Pemain:\n";
    for (int i = 0; i < 5; i++){
        cout << "Pemain " << i + 1 << " : " << scores[i] << endl;
    }
    
}