#include <iostream>

using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;

    if(nilai >= 85) cout << "Grade: A\n";
    else if (nilai >= 70) cout << "Grade: B\n";
    else if (nilai >= 60) cout << "Grade: C\n";
    else cout << "Grade: D\n";
}