#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 2, c = 7;
    int hasil = a * b + c % 3 - ++a;
    cout << "Ekpresi: hasil = a * b + c % 3 - ++a;" << endl;
    cout << "Hasil = " << hasil;
}