#include <iostream>
using namespace std;

int main() {
    int score = 50;
    
    cout << "Skor awal = " << score << endl;
    score += 10;
    cout << "Nilai Skor setelah += 10 : " << score << endl;
    
    score -= 5;
    cout << "Nilai Skor setelah -= 5 : " << score << endl;

    score *= 2;
    cout << "Nilai Skor setelah *= 2 : " << score << endl;

    score %= 7;
    cout << "Nilai Skor setelah %= 7 : " << score << endl;


}