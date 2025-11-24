#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = a;
    b = b + 10;
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << endl << endl;
    int x = 5;
    int *y = &x;
    cout << "Variable y = " << y << endl;
    cout << "Isi dari alamat yang ditunjuk variable y = " << *y << endl;
    *y = 8;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai y = " << *y << endl;
    x = 12;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai y = " << *y << endl;

}